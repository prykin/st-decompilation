FUN_004ad430:
004AD430  56                        PUSH ESI
004AD431  8B F1                     MOV ESI,ECX
004AD433  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004AD436  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AD439  50                        PUSH EAX
004AD43A  E8 21 D7 23 00            CALL 0x006eab60
004AD43F  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
004AD443  5E                        POP ESI
004AD444  C3                        RET
