FUN_006d5820:
006D5820  55                        PUSH EBP
006D5821  8B EC                     MOV EBP,ESP
006D5823  56                        PUSH ESI
006D5824  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D5827  57                        PUSH EDI
006D5828  8B 7E 4C                  MOV EDI,dword ptr [ESI + 0x4c]
006D582B  57                        PUSH EDI
006D582C  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006D5832  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
006D5835  8B 88 0C 03 00 00         MOV ECX,dword ptr [EAX + 0x30c]
006D583B  85 C9                     TEST ECX,ECX
006D583D  75 1B                     JNZ 0x006d585a
006D583F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D5842  50                        PUSH EAX
006D5843  56                        PUSH ESI
006D5844  E8 E5 2D 07 00            CALL 0x0074862e
006D5849  57                        PUSH EDI
006D584A  8B F0                     MOV ESI,EAX
006D584C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5852  8B C6                     MOV EAX,ESI
006D5854  5F                        POP EDI
006D5855  5E                        POP ESI
006D5856  5D                        POP EBP
006D5857  C2 08 00                  RET 0x8
LAB_006d585a:
006D585A  8D 88 94 02 00 00         LEA ECX,[EAX + 0x294]
006D5860  85 C9                     TEST ECX,ECX
006D5862  74 08                     JZ 0x006d586c
006D5864  8D 88 A0 02 00 00         LEA ECX,[EAX + 0x2a0]
006D586A  EB 02                     JMP 0x006d586e
LAB_006d586c:
006D586C  33 C9                     XOR ECX,ECX
LAB_006d586e:
006D586E  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D5871  3B C1                     CMP EAX,ECX
006D5873  74 29                     JZ 0x006d589e
006D5875  85 C0                     TEST EAX,EAX
006D5877  74 06                     JZ 0x006d587f
006D5879  8B 10                     MOV EDX,dword ptr [EAX]
006D587B  50                        PUSH EAX
006D587C  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_006d587f:
006D587F  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
006D5882  8D 88 94 02 00 00         LEA ECX,[EAX + 0x294]
006D5888  85 C9                     TEST ECX,ECX
006D588A  74 07                     JZ 0x006d5893
006D588C  05 A0 02 00 00            ADD EAX,0x2a0
006D5891  EB 02                     JMP 0x006d5895
LAB_006d5893:
006D5893  33 C0                     XOR EAX,EAX
LAB_006d5895:
006D5895  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006D5898  8B 10                     MOV EDX,dword ptr [EAX]
006D589A  50                        PUSH EAX
006D589B  FF 52 04                  CALL dword ptr [EDX + 0x4]
LAB_006d589e:
006D589E  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D58A1  50                        PUSH EAX
006D58A2  8B 08                     MOV ECX,dword ptr [EAX]
006D58A4  FF 51 04                  CALL dword ptr [ECX + 0x4]
006D58A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D58AA  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006D58AD  57                        PUSH EDI
006D58AE  89 10                     MOV dword ptr [EAX],EDX
006D58B0  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D58B6  5F                        POP EDI
006D58B7  33 C0                     XOR EAX,EAX
006D58B9  5E                        POP ESI
006D58BA  5D                        POP EBP
006D58BB  C2 08 00                  RET 0x8
