param ([String[]] $only)

# Create folders
$buildPath = '.\build\@11th_STB_aux\addons'
New-Item $buildPath -ItemType Directory -Force

$buildPath = Resolve-Path $buildPath
$includePath = Resolve-Path '.\include.txt'

$addonBuilder = Join-Path (Get-ItemProperty "HKCU:\Software\Bohemia Interactive\Arma 3 Tools").path "AddonBuilder\AddonBuilder.exe"

function Build-Addon
{
    param ([string] $addonFolder)
    $addonPath = Resolve-Path ".\Addons\$addonFolder"
    & "$addonBuilder" $addonPath $buildPath -prefix="11th_STB_aux" -clear -include="$includePath"
}

if ($PSBoundParameters.ContainsKey('only'))
{
    foreach($addonFolder in $only)
    {
        Build-Addon -addonFolder $addonFolder
    }
}
else
{
    foreach($addonFolder in Get-ChildItem -Directory .\Addons)
    {
        Build-Addon -addonFolder $addonFolder
    }
}

Copy-Item -Path ".\addons\@11th_STB_aux\mod.cpp" -Destination ".\build\@11th STB Aux Mod"
