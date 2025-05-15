::Este archivo es para abrir las carpetas de tu repo y ser más organizado. Ingresa tus rutas.

::Ruta absoluta
::set my_path = C:\Users\Metin2\Documents\GitHub\Marty-v58\

::Ruta relativa
set my_path = .

start "" "%my_path%client"
timeout /t 1 /nobreak > nul
start "" "%my_path%client\pack"
timeout /t 1 /nobreak > nul
start "" "%my_path%source-client\Srcs\Client"
timeout /t 1 /nobreak > nul
start "" "%my_path%source-server\Srcs\Server"
timeout /t 1 /nobreak > nul
start "" "%my_path%source-client\Srcs\Tools\DumpProto\HOWTO"
timeout /t 1 /nobreak > nul
start "" "%my_path%protos\Pack Protos Script"
timeout /t 1 /nobreak > nul
start "" "%my_path%serverfiles"
timeout /t 1 /nobreak > nul
