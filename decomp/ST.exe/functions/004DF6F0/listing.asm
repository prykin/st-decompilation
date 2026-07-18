FUN_004df6f0:
004DF6F0  55                        PUSH EBP
004DF6F1  8B EC                     MOV EBP,ESP
004DF6F3  53                        PUSH EBX
004DF6F4  56                        PUSH ESI
004DF6F5  8B F1                     MOV ESI,ECX
004DF6F7  57                        PUSH EDI
004DF6F8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF6FE  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004DF704  50                        PUSH EAX
004DF705  E8 AD 52 F2 FF            CALL 0x004049b7
004DF70A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DF70D  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004DF713  25 FF 00 00 00            AND EAX,0xff
004DF718  48                        DEC EAX
004DF719  83 FA 0C                  CMP EDX,0xc
004DF71C  0F 84 BD 00 00 00         JZ 0x004df7df
004DF722  7E 76                     JLE 0x004df79a
004DF724  83 FA 0E                  CMP EDX,0xe
004DF727  7F 71                     JG 0x004df79a
004DF729  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004DF72F  83 EA 00                  SUB EDX,0x0
004DF732  74 3A                     JZ 0x004df76e
004DF734  4A                        DEC EDX
004DF735  74 0A                     JZ 0x004df741
004DF737  4A                        DEC EDX
004DF738  74 34                     JZ 0x004df76e
004DF73A  5F                        POP EDI
004DF73B  5E                        POP ESI
004DF73C  5B                        POP EBX
004DF73D  5D                        POP EBP
004DF73E  C2 10 00                  RET 0x10
LAB_004df741:
004DF741  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DF747  5F                        POP EDI
004DF748  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004DF74B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DF74E  03 F2                     ADD ESI,EDX
004DF750  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004DF753  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004DF75A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004DF75D  5E                        POP ESI
004DF75E  8B 44 D0 04               MOV EAX,dword ptr [EAX + EDX*0x8 + 0x4]
004DF762  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004DF765  89 01                     MOV dword ptr [ECX],EAX
004DF767  5B                        POP EBX
004DF768  89 02                     MOV dword ptr [EDX],EAX
004DF76A  5D                        POP EBP
004DF76B  C2 10 00                  RET 0x10
LAB_004df76e:
004DF76E  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DF774  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004DF777  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004DF77E  5F                        POP EDI
004DF77F  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DF782  03 F0                     ADD ESI,EAX
004DF784  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004DF787  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DF78A  5E                        POP ESI
004DF78B  5B                        POP EBX
004DF78C  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004DF78F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DF792  89 02                     MOV dword ptr [EDX],EAX
004DF794  89 01                     MOV dword ptr [ECX],EAX
004DF796  5D                        POP EBP
004DF797  C2 10 00                  RET 0x10
LAB_004df79a:
004DF79A  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004DF7A0  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004DF7A7  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004DF7AA  03 D7                     ADD EDX,EDI
004DF7AC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004DF7AF  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004DF7B2  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004DF7B5  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004DF7B8  89 13                     MOV dword ptr [EBX],EDX
004DF7BA  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DF7C0  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DF7C3  03 F0                     ADD ESI,EAX
004DF7C5  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004DF7CC  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004DF7CF  5F                        POP EDI
004DF7D0  5E                        POP ESI
004DF7D1  5B                        POP EBX
004DF7D2  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004DF7D6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DF7D9  89 0A                     MOV dword ptr [EDX],ECX
004DF7DB  5D                        POP EBP
004DF7DC  C2 10 00                  RET 0x10
LAB_004df7df:
004DF7DF  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004DF7E5  83 EA 00                  SUB EDX,0x0
004DF7E8  74 52                     JZ 0x004df83c
004DF7EA  4A                        DEC EDX
004DF7EB  74 0A                     JZ 0x004df7f7
004DF7ED  4A                        DEC EDX
004DF7EE  74 4C                     JZ 0x004df83c
004DF7F0  5F                        POP EDI
004DF7F1  5E                        POP ESI
004DF7F2  5B                        POP EBX
004DF7F3  5D                        POP EBP
004DF7F4  C2 10 00                  RET 0x10
LAB_004df7f7:
004DF7F7  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004DF7FD  8B 1C 8D 10 83 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b8310]
004DF804  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004DF807  03 D7                     ADD EDX,EDI
004DF809  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004DF80C  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004DF80F  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004DF812  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004DF815  89 13                     MOV dword ptr [EBX],EDX
004DF817  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DF81D  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DF820  03 F0                     ADD ESI,EAX
004DF822  8B 04 8D 10 83 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b8310]
004DF829  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004DF82C  5F                        POP EDI
004DF82D  5E                        POP ESI
004DF82E  5B                        POP EBX
004DF82F  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004DF833  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DF836  89 0A                     MOV dword ptr [EDX],ECX
004DF838  5D                        POP EBP
004DF839  C2 10 00                  RET 0x10
LAB_004df83c:
004DF83C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004DF83F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DF842  5F                        POP EDI
004DF843  5E                        POP ESI
004DF844  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
004DF84A  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
004DF850  5B                        POP EBX
004DF851  5D                        POP EBP
004DF852  C2 10 00                  RET 0x10
