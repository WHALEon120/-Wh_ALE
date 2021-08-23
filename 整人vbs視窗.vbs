dim msg
dim react
dim a:a=0
do until msg="password"
msg=inputbox("Enter password to close this window😝")
if msg="password" then
msgbox("Correct!!!")
a=0
else
msgbox("Wrong!!!")
a=a+1
end if
if a=5 then
msgbox("You don't konw the password?")
elseif a=10 then
msgbox("Poor you")
react=inputbox("Do you want to know the password???")
if react="yes" then
msgbox("NO, I'm so sorry")
else
msgbox("OK, FINE!!!")
end if
elseif a>10 then
msgbox("NOOB")
react=inputbox("Do you want to know the password???")
if react="yes" then
msgbox("NO, I'm so sorry")
else
msgbox("OK, FINE!!!")
end if
end if
loop
