MMsgTy::SetPanel:
005B87D0  55                        PUSH EBP
005B87D1  8B EC                     MOV EBP,ESP
005B87D3  81 EC 74 04 00 00         SUB ESP,0x474
005B87D9  8A 41 65                  MOV AL,byte ptr [ECX + 0x65]
005B87DC  53                        PUSH EBX
005B87DD  56                        PUSH ESI
005B87DE  3C 02                     CMP AL,0x2
005B87E0  57                        PUSH EDI
005B87E1  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005B87E4  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
005B87E8  0F 85 7C 03 00 00         JNZ 0x005b8b6a
005B87EE  8A 81 A9 1C 00 00         MOV AL,byte ptr [ECX + 0x1ca9]
005B87F4  84 C0                     TEST AL,AL
005B87F6  0F 85 6E 03 00 00         JNZ 0x005b8b6a
005B87FC  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B8801  8D 55 90                  LEA EDX,[EBP + -0x70]
005B8804  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005B8807  6A 00                     PUSH 0x0
005B8809  52                        PUSH EDX
005B880A  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005B880D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B8813  E8 D8 4F 17 00            CALL 0x0072d7f0
005B8818  8B F0                     MOV ESI,EAX
005B881A  83 C4 08                  ADD ESP,0x8
005B881D  85 F6                     TEST ESI,ESI
005B881F  0F 85 07 03 00 00         JNZ 0x005b8b2c
005B8825  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005B8828  8B CB                     MOV ECX,EBX
005B882A  E8 2A AC E4 FF            CALL 0x00403459
005B882F  6A 01                     PUSH 0x1
005B8831  56                        PUSH ESI
005B8832  56                        PUSH ESI
005B8833  8B CB                     MOV ECX,EBX
005B8835  E8 6B 97 E4 FF            CALL 0x00401fa5
005B883A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B883D  85 F6                     TEST ESI,ESI
005B883F  0F 84 DD 00 00 00         JZ 0x005b8922
005B8845  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005B8848  89 B3 D0 1C 00 00         MOV dword ptr [EBX + 0x1cd0],ESI
005B884E  85 C0                     TEST EAX,EAX
005B8850  74 7C                     JZ 0x005b88ce
005B8852  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005B8855  50                        PUSH EAX
005B8856  A1 18 76 80 00            MOV EAX,[0x00807618]
005B885B  50                        PUSH EAX
005B885C  51                        PUSH ECX
005B885D  E8 DE 78 0F 00            CALL 0x006b0140
005B8862  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B8868  50                        PUSH EAX
005B8869  52                        PUSH EDX
005B886A  56                        PUSH ESI
005B886B  E8 D0 78 0F 00            CALL 0x006b0140
005B8870  50                        PUSH EAX
005B8871  8D 85 8C FB FF FF         LEA EAX,[EBP + 0xfffffb8c]
005B8877  68 A4 CC 7C 00            PUSH 0x7ccca4
005B887C  50                        PUSH EAX
005B887D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005B8883  83 C4 14                  ADD ESP,0x14
005B8886  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B888C  8B BB 88 1D 00 00         MOV EDI,dword ptr [EBX + 0x1d88]
005B8892  8D 8D 8C FB FF FF         LEA ECX,[EBP + 0xfffffb8c]
005B8898  6A FF                     PUSH -0x1
005B889A  6A 07                     PUSH 0x7
005B889C  6A FF                     PUSH -0x1
005B889E  6A FF                     PUSH -0x1
005B88A0  6A 01                     PUSH 0x1
005B88A2  6A FF                     PUSH -0x1
005B88A4  6A FE                     PUSH -0x2
005B88A6  6A 39                     PUSH 0x39
005B88A8  8D B3 88 1D 00 00         LEA ESI,[EBX + 0x1d88]
005B88AE  68 58 01 00 00            PUSH 0x158
005B88B3  51                        PUSH ECX
005B88B4  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005B88B7  E8 C4 AB 15 00            CALL 0x00713480
005B88BC  50                        PUSH EAX
005B88BD  8B CE                     MOV ECX,ESI
005B88BF  FF 57 08                  CALL dword ptr [EDI + 0x8]
005B88C2  C7 83 90 1D 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1d90],0x0
005B88CC  EB 5E                     JMP 0x005b892c
LAB_005b88ce:
005B88CE  A1 18 76 80 00            MOV EAX,[0x00807618]
005B88D3  6A FF                     PUSH -0x1
005B88D5  8B 93 88 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d88]
005B88DB  6A 07                     PUSH 0x7
005B88DD  6A FF                     PUSH -0x1
005B88DF  6A FF                     PUSH -0x1
005B88E1  6A 01                     PUSH 0x1
005B88E3  6A FF                     PUSH -0x1
005B88E5  8D BB 88 1D 00 00         LEA EDI,[EBX + 0x1d88]
005B88EB  6A FE                     PUSH -0x2
005B88ED  6A 39                     PUSH 0x39
005B88EF  68 58 01 00 00            PUSH 0x158
005B88F4  50                        PUSH EAX
005B88F5  56                        PUSH ESI
005B88F6  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B88F9  E8 42 78 0F 00            CALL 0x006b0140
005B88FE  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B8904  50                        PUSH EAX
005B8905  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B8908  E8 73 AB 15 00            CALL 0x00713480
005B890D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B8910  50                        PUSH EAX
005B8911  8B CF                     MOV ECX,EDI
005B8913  FF 52 08                  CALL dword ptr [EDX + 0x8]
005B8916  C7 83 90 1D 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1d90],0x0
005B8920  EB 0A                     JMP 0x005b892c
LAB_005b8922:
005B8922  C7 83 D0 1C 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1cd0],0x0
LAB_005b892c:
005B892C  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B8932  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005B8936  84 C0                     TEST AL,AL
005B8938  0F 86 02 01 00 00         JBE 0x005b8a40
LAB_005b893e:
005B893E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B8941  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005B8944  81 E2 FF 00 00 00         AND EDX,0xff
005B894A  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
005B894D  C1 E0 03                  SHL EAX,0x3
005B8950  2B C2                     SUB EAX,EDX
005B8952  03 C1                     ADD EAX,ECX
005B8954  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005B8957  8B 08                     MOV ECX,dword ptr [EAX]
005B8959  85 C9                     TEST ECX,ECX
005B895B  0F 84 A4 00 00 00         JZ 0x005b8a05
005B8961  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
005B8968  6A FF                     PUSH -0x1
005B896A  2B C2                     SUB EAX,EDX
005B896C  6A 07                     PUSH 0x7
005B896E  6A FF                     PUSH -0x1
005B8970  6A FF                     PUSH -0x1
005B8972  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005B8975  6A 01                     PUSH 0x1
005B8977  6A FF                     PUSH -0x1
005B8979  6A FE                     PUSH -0x2
005B897B  8D 14 C2                  LEA EDX,[EDX + EAX*0x8]
005B897E  6A 1E                     PUSH 0x1e
005B8980  6A 7D                     PUSH 0x7d
005B8982  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
005B8985  8B B4 02 74 01 00 00      MOV ESI,dword ptr [EDX + EAX*0x1 + 0x174]
005B898C  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
005B898F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B8995  52                        PUSH EDX
005B8996  51                        PUSH ECX
005B8997  E8 A4 77 0F 00            CALL 0x006b0140
005B899C  50                        PUSH EAX
005B899D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B89A2  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005B89A5  E8 D6 AA 15 00            CALL 0x00713480
005B89AA  50                        PUSH EAX
005B89AB  8D 8F 74 01 00 00         LEA ECX,[EDI + 0x174]
005B89B1  FF 56 08                  CALL dword ptr [ESI + 0x8]
005B89B4  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005B89B7  8B 97 BC 00 00 00         MOV EDX,dword ptr [EDI + 0xbc]
005B89BD  8D 87 BC 00 00 00         LEA EAX,[EDI + 0xbc]
005B89C3  8B 0E                     MOV ECX,dword ptr [ESI]
005B89C5  3B CA                     CMP ECX,EDX
005B89C7  75 24                     JNZ 0x005b89ed
005B89C9  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
005B89CC  84 C9                     TEST CL,CL
005B89CE  75 1D                     JNZ 0x005b89ed
005B89D0  8B 97 80 01 00 00         MOV EDX,dword ptr [EDI + 0x180]
005B89D6  B9 09 00 00 00            MOV ECX,0x9
005B89DB  83 EA 03                  SUB EDX,0x3
005B89DE  89 97 7C 01 00 00         MOV dword ptr [EDI + 0x17c],EDX
005B89E4  8B F8                     MOV EDI,EAX
005B89E6  F3 A5                     MOVSD.REP ES:EDI,ESI
005B89E8  66 A5                     MOVSW ES:EDI,ESI
005B89EA  A4                        MOVSB ES:EDI,ESI
005B89EB  EB 3D                     JMP 0x005b8a2a
LAB_005b89ed:
005B89ED  C7 87 7C 01 00 00 00 00 00 00  MOV dword ptr [EDI + 0x17c],0x0
005B89F7  B9 09 00 00 00            MOV ECX,0x9
005B89FC  8B F8                     MOV EDI,EAX
005B89FE  F3 A5                     MOVSD.REP ES:EDI,ESI
005B8A00  66 A5                     MOVSW ES:EDI,ESI
005B8A02  A4                        MOVSB ES:EDI,ESI
005B8A03  EB 25                     JMP 0x005b8a2a
LAB_005b8a05:
005B8A05  8D 34 D5 00 00 00 00      LEA ESI,[EDX*0x8 + 0x0]
005B8A0C  33 C0                     XOR EAX,EAX
005B8A0E  2B F2                     SUB ESI,EDX
005B8A10  B9 09 00 00 00            MOV ECX,0x9
005B8A15  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
005B8A18  8D 14 F2                  LEA EDX,[EDX + ESI*0x8]
005B8A1B  8D 34 53                  LEA ESI,[EBX + EDX*0x2]
005B8A1E  8D BC 32 BC 00 00 00      LEA EDI,[EDX + ESI*0x1 + 0xbc]
005B8A25  F3 AB                     STOSD.REP ES:EDI
005B8A27  66 AB                     STOSW ES:EDI
005B8A29  AA                        STOSB ES:EDI
LAB_005b8a2a:
005B8A2A  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005B8A2D  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
005B8A33  FE C0                     INC AL
005B8A35  3A C1                     CMP AL,CL
005B8A37  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005B8A3A  0F 82 FE FE FF FF         JC 0x005b893e
LAB_005b8a40:
005B8A40  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B8A46  32 D2                     XOR DL,DL
005B8A48  84 C0                     TEST AL,AL
005B8A4A  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B8A4D  76 59                     JBE 0x005b8aa8
LAB_005b8a4f:
005B8A4F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B8A52  25 FF 00 00 00            AND EAX,0xff
005B8A57  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B8A5E  2B C8                     SUB ECX,EAX
005B8A60  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B8A63  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005B8A66  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
005B8A69  03 C8                     ADD ECX,EAX
005B8A6B  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005B8A6E  89 81 27 01 00 00         MOV dword ptr [ECX + 0x127],EAX
005B8A74  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B8A77  25 FF 00 00 00            AND EAX,0xff
005B8A7C  40                        INC EAX
005B8A7D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005B8A80  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005B8A83  C1 E0 02                  SHL EAX,0x2
005B8A86  89 81 23 01 00 00         MOV dword ptr [ECX + 0x123],EAX
005B8A8C  8B 81 BC 00 00 00         MOV EAX,dword ptr [ECX + 0xbc]
005B8A92  85 C0                     TEST EAX,EAX
005B8A94  74 03                     JZ 0x005b8a99
005B8A96  FE 45 F8                  INC byte ptr [EBP + -0x8]
LAB_005b8a99:
005B8A99  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B8A9F  FE C2                     INC DL
005B8AA1  3A D0                     CMP DL,AL
005B8AA3  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B8AA6  72 A7                     JC 0x005b8a4f
LAB_005b8aa8:
005B8AA8  B9 06 00 00 00            MOV ECX,0x6
005B8AAD  33 C0                     XOR EAX,EAX
005B8AAF  8D BB 82 1C 00 00         LEA EDI,[EBX + 0x1c82]
005B8AB5  8D 93 9C 1C 00 00         LEA EDX,[EBX + 0x1c9c]
005B8ABB  F3 AB                     STOSD.REP ES:EDI
005B8ABD  B9 01 01 01 01            MOV ECX,0x1010101
005B8AC2  6A FF                     PUSH -0x1
005B8AC4  66 AB                     STOSW ES:EDI
005B8AC6  89 0A                     MOV dword ptr [EDX],ECX
005B8AC8  6A 00                     PUSH 0x0
005B8ACA  6A 05                     PUSH 0x5
005B8ACC  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
005B8ACF  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
005B8AD2  88 4A 0C                  MOV byte ptr [EDX + 0xc],CL
005B8AD5  8B CB                     MOV ECX,EBX
005B8AD7  C6 43 65 03               MOV byte ptr [EBX + 0x65],0x3
005B8ADB  E8 11 C1 E4 FF            CALL 0x00404bf1
005B8AE0  8B 93 AB 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cab]
005B8AE6  85 D2                     TEST EDX,EDX
005B8AE8  74 2B                     JZ 0x005b8b15
005B8AEA  8B 5B 0C                  MOV EBX,dword ptr [EBX + 0xc]
005B8AED  B9 08 00 00 00            MOV ECX,0x8
005B8AF2  33 C0                     XOR EAX,EAX
005B8AF4  8D 7D D0                  LEA EDI,[EBP + -0x30]
005B8AF7  F3 AB                     STOSD.REP ES:EDI
005B8AF9  8D 4D D0                  LEA ECX,[EBP + -0x30]
005B8AFC  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005B8AFF  C7 45 DC 02 00 00 00      MOV dword ptr [EBP + -0x24],0x2
005B8B06  C7 45 E0 40 69 00 00      MOV dword ptr [EBP + -0x20],0x6940
005B8B0D  8B 03                     MOV EAX,dword ptr [EBX]
005B8B0F  51                        PUSH ECX
005B8B10  8B CB                     MOV ECX,EBX
005B8B12  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005b8b15:
005B8B15  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
005B8B18  B8 01 00 00 00            MOV EAX,0x1
005B8B1D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B8B23  5F                        POP EDI
005B8B24  5E                        POP ESI
005B8B25  5B                        POP EBX
005B8B26  8B E5                     MOV ESP,EBP
005B8B28  5D                        POP EBP
005B8B29  C2 10 00                  RET 0x10
LAB_005b8b2c:
005B8B2C  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005B8B2F  68 B4 CC 7C 00            PUSH 0x7cccb4
005B8B34  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B8B39  56                        PUSH ESI
005B8B3A  6A 00                     PUSH 0x0
005B8B3C  68 81 01 00 00            PUSH 0x181
005B8B41  68 74 CB 7C 00            PUSH 0x7ccb74
005B8B46  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B8B4B  E8 80 49 0F 00            CALL 0x006ad4d0
005B8B50  83 C4 18                  ADD ESP,0x18
005B8B53  85 C0                     TEST EAX,EAX
005B8B55  74 01                     JZ 0x005b8b58
005B8B57  CC                        INT3
LAB_005b8b58:
005B8B58  68 81 01 00 00            PUSH 0x181
005B8B5D  68 74 CB 7C 00            PUSH 0x7ccb74
005B8B62  6A 00                     PUSH 0x0
005B8B64  56                        PUSH ESI
005B8B65  E8 D6 D2 0E 00            CALL 0x006a5e40
LAB_005b8b6a:
005B8B6A  5F                        POP EDI
005B8B6B  5E                        POP ESI
005B8B6C  33 C0                     XOR EAX,EAX
005B8B6E  5B                        POP EBX
005B8B6F  8B E5                     MOV ESP,EBP
005B8B71  5D                        POP EBP
005B8B72  C2 10 00                  RET 0x10
