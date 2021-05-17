param{
    $id
}

$user = Get-ADUser -Filter "SamAccountName -eq '$id'"

Set-Content -Path .\Scripts\output.txt -Value "$user.SamAccountName /n $user.Name"

