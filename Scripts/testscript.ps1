param (
	 $param1
)

##Write-Host "HELLLOOOOOOOOOOO"

##Get-Credential -Credential $param1

$username = "BOIIII"

$userID = "B-1"

New-Item -Path . -Name "testfile1.txt" -ItemType "file" -Value "$username and $userID"

Get-Location

Read-Host -Prompt "Press any key to continue"