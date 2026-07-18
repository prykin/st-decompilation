FUN_004df910:
004DF910  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004DF913  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF919  56                        PUSH ESI
004DF91A  6A 2F                     PUSH 0x2f
004DF91C  50                        PUSH EAX
004DF91D  33 F6                     XOR ESI,ESI
004DF91F  E8 47 1F F2 FF            CALL 0x0040186b
004DF924  85 C0                     TEST EAX,EAX
004DF926  74 0E                     JZ 0x004df936
004DF928  B8 01 00 00 00            MOV EAX,0x1
004DF92D  5E                        POP ESI
004DF92E  8B 04 85 8C 8F 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x798f8c]
004DF935  C3                        RET
LAB_004df936:
004DF936  8B 04 B5 8C 8F 79 00      MOV EAX,dword ptr [ESI*0x4 + 0x798f8c]
004DF93D  5E                        POP ESI
004DF93E  C3                        RET
