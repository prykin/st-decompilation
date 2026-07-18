FUN_00646110:
00646110  55                        PUSH EBP
00646111  8B EC                     MOV EBP,ESP
00646113  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00646116  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00646119  33 C0                     XOR EAX,EAX
0064611B  56                        PUSH ESI
0064611C  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0064611F  57                        PUSH EDI
00646120  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00646123  89 01                     MOV dword ptr [ECX],EAX
00646125  8D 8A 6A FF FF FF         LEA ECX,[EDX + 0xffffff6a]
0064612B  89 06                     MOV dword ptr [ESI],EAX
0064612D  85 C9                     TEST ECX,ECX
0064612F  89 07                     MOV dword ptr [EDI],EAX
00646131  7C 6A                     JL 0x0064619d
00646133  83 F9 2D                  CMP ECX,0x2d
00646136  7D 65                     JGE 0x0064619d
00646138  53                        PUSH EBX
00646139  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0064613C  B8 01 00 00 00            MOV EAX,0x1
00646141  8D 1C 8B                  LEA EBX,[EBX + ECX*0x4]
00646144  03 CB                     ADD ECX,EBX
00646146  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00646149  81 FA 99 00 00 00         CMP EDX,0x99
0064614F  8B 0C 8D 68 64 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e6468]
00646156  89 0B                     MOV dword ptr [EBX],ECX
00646158  5B                        POP EBX
00646159  75 12                     JNZ 0x0064616d
0064615B  8B 15 C0 66 7E 00         MOV EDX,dword ptr [0x007e66c0]
00646161  89 16                     MOV dword ptr [ESI],EDX
00646163  C7 07 07 00 00 00         MOV dword ptr [EDI],0x7
00646169  5F                        POP EDI
0064616A  5E                        POP ESI
0064616B  5D                        POP EBP
0064616C  C3                        RET
LAB_0064616d:
0064616D  81 FA B7 00 00 00         CMP EDX,0xb7
00646173  75 12                     JNZ 0x00646187
00646175  8B 0D 24 67 7E 00         MOV ECX,dword ptr [0x007e6724]
0064617B  89 0E                     MOV dword ptr [ESI],ECX
0064617D  C7 07 05 00 00 00         MOV dword ptr [EDI],0x5
00646183  5F                        POP EDI
00646184  5E                        POP ESI
00646185  5D                        POP EBP
00646186  C3                        RET
LAB_00646187:
00646187  81 FA AA 00 00 00         CMP EDX,0xaa
0064618D  75 0E                     JNZ 0x0064619d
0064618F  8B 15 F8 65 7E 00         MOV EDX,dword ptr [0x007e65f8]
00646195  89 16                     MOV dword ptr [ESI],EDX
00646197  C7 07 19 00 00 00         MOV dword ptr [EDI],0x19
LAB_0064619d:
0064619D  5F                        POP EDI
0064619E  5E                        POP ESI
0064619F  5D                        POP EBP
006461A0  C3                        RET
