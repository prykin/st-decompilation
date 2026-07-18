FUN_004ddba0:
004DDBA0  55                        PUSH EBP
004DDBA1  8B EC                     MOV EBP,ESP
004DDBA3  56                        PUSH ESI
004DDBA4  8B F1                     MOV ESI,ECX
004DDBA6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDBAC  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DDBAF  50                        PUSH EAX
004DDBB0  E8 02 6E F2 FF            CALL 0x004049b7
004DDBB5  25 FF 00 00 00            AND EAX,0xff
004DDBBA  48                        DEC EAX
004DDBBB  74 18                     JZ 0x004ddbd5
004DDBBD  48                        DEC EAX
004DDBBE  74 0E                     JZ 0x004ddbce
004DDBC0  48                        DEC EAX
004DDBC1  74 04                     JZ 0x004ddbc7
004DDBC3  33 C0                     XOR EAX,EAX
004DDBC5  EB 13                     JMP 0x004ddbda
LAB_004ddbc7:
004DDBC7  B8 78 00 00 00            MOV EAX,0x78
004DDBCC  EB 0C                     JMP 0x004ddbda
LAB_004ddbce:
004DDBCE  B8 88 00 00 00            MOV EAX,0x88
004DDBD3  EB 05                     JMP 0x004ddbda
LAB_004ddbd5:
004DDBD5  B8 17 00 00 00            MOV EAX,0x17
LAB_004ddbda:
004DDBDA  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DDBDD  50                        PUSH EAX
004DDBDE  51                        PUSH ECX
004DDBDF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDBE5  E8 81 3C F2 FF            CALL 0x0040186b
004DDBEA  8B D0                     MOV EDX,EAX
004DDBEC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DDBEF  5E                        POP ESI
004DDBF0  8D 84 80 12 FD FF FF      LEA EAX,[EAX + EAX*0x4 + 0xfffffd12]
004DDBF7  03 D0                     ADD EDX,EAX
004DDBF9  8B 04 95 1C 60 7E 00      MOV EAX,dword ptr [EDX*0x4 + 0x7e601c]
004DDC00  5D                        POP EBP
004DDC01  C2 04 00                  RET 0x4
