param{
    $name
}

$user = Get-ADUser -Filter "Name -eq '$name'"

Set-Content -Path .\Scripts\output.txt -Value "$user.SamAccountName /n $user.Name"

