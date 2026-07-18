FUN_00559ec0:
00559EC0  55                        PUSH EBP
00559EC1  8B EC                     MOV EBP,ESP
00559EC3  83 EC 5C                  SUB ESP,0x5c
00559EC6  53                        PUSH EBX
00559EC7  56                        PUSH ESI
00559EC8  57                        PUSH EDI
00559EC9  8B F9                     MOV EDI,ECX
00559ECB  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00559ECE  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
00559ED4  85 C0                     TEST EAX,EAX
00559ED6  0F 84 9D 01 00 00         JZ 0x0055a079
00559EDC  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00559EDF  85 F6                     TEST ESI,ESI
00559EE1  0F 8C 92 01 00 00         JL 0x0055a079
00559EE7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00559EEA  83 F8 08                  CMP EAX,0x8
00559EED  0F 83 86 01 00 00         JNC 0x0055a079
00559EF3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00559EF9  85 C9                     TEST ECX,ECX
00559EFB  74 11                     JZ 0x00559f0e
00559EFD  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00559F00  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
00559F08  0F 83 6B 01 00 00         JNC 0x0055a079
LAB_00559f0e:
00559F0E  8B 8C 87 94 00 00 00      MOV ECX,dword ptr [EDI + EAX*0x4 + 0x94]
00559F15  85 C9                     TEST ECX,ECX
00559F17  75 4F                     JNZ 0x00559f68
00559F19  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00559F1E  8D 55 A8                  LEA EDX,[EBP + -0x58]
00559F21  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00559F24  6A 00                     PUSH 0x0
00559F26  52                        PUSH EDX
00559F27  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00559F2A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00559F30  E8 BB 38 1D 00            CALL 0x0072d7f0
00559F35  83 C4 08                  ADD ESP,0x8
00559F38  85 C0                     TEST EAX,EAX
00559F3A  0F 85 BC 00 00 00         JNZ 0x00559ffc
00559F40  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00559F43  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00559F46  0F AF 47 20               IMUL EAX,dword ptr [EDI + 0x20]
00559F4A  50                        PUSH EAX
00559F4B  E8 C0 0C 15 00            CALL 0x006aac10
00559F50  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559F53  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00559F56  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00559F59  89 84 8F 94 00 00 00      MOV dword ptr [EDI + ECX*0x4 + 0x94],EAX
00559F60  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00559F66  8B C1                     MOV EAX,ECX
LAB_00559f68:
00559F68  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00559F6B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00559F6E  F6 C5 10                  TEST CH,0x10
00559F71  74 18                     JZ 0x00559f8b
00559F73  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00559F76  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00559F79  52                        PUSH EDX
00559F7A  56                        PUSH ESI
00559F7B  50                        PUSH EAX
00559F7C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00559F7F  50                        PUSH EAX
00559F80  53                        PUSH EBX
00559F81  51                        PUSH ECX
00559F82  6A 04                     PUSH 0x4
00559F84  8B CF                     MOV ECX,EDI
00559F86  E8 77 9B EA FF            CALL 0x00403b02
LAB_00559f8b:
00559F8B  F6 45 20 10               TEST byte ptr [EBP + 0x20],0x10
00559F8F  0F 84 E4 00 00 00         JZ 0x0055a079
00559F95  85 F6                     TEST ESI,ESI
00559F97  7D 05                     JGE 0x00559f9e
00559F99  33 F6                     XOR ESI,ESI
00559F9B  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_00559f9e:
00559F9E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00559FA1  8D 54 36 01               LEA EDX,[ESI + ESI*0x1 + 0x1]
00559FA5  2B C6                     SUB EAX,ESI
00559FA7  56                        PUSH ESI
00559FA8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00559FAB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00559FAE  2B DE                     SUB EBX,ESI
00559FB0  E8 0A 89 EA FF            CALL 0x004028bf
00559FB5  8B C8                     MOV ECX,EAX
00559FB7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00559FBA  83 C4 04                  ADD ESP,0x4
00559FBD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00559FC0  85 C0                     TEST EAX,EAX
00559FC2  0F 8E B1 00 00 00         JLE 0x0055a079
00559FC8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00559FCB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00559fce:
00559FCE  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00559FD1  33 C0                     XOR EAX,EAX
LAB_00559fd3:
00559FD3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00559FD6  85 C9                     TEST ECX,ECX
00559FD8  74 09                     JZ 0x00559fe3
00559FDA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00559FDD  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
00559FE1  74 73                     JZ 0x0055a056
LAB_00559fe3:
00559FE3  85 F6                     TEST ESI,ESI
00559FE5  7C 4B                     JL 0x0055a032
00559FE7  3B 77 20                  CMP ESI,dword ptr [EDI + 0x20]
00559FEA  7D 46                     JGE 0x0055a032
00559FEC  85 DB                     TEST EBX,EBX
00559FEE  7C 42                     JL 0x0055a032
00559FF0  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
00559FF3  7D 3D                     JGE 0x0055a032
00559FF5  B9 01 00 00 00            MOV ECX,0x1
00559FFA  EB 38                     JMP 0x0055a034
LAB_00559ffc:
00559FFC  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00559FFF  68 FC 93 7C 00            PUSH 0x7c93fc
0055A004  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055A009  50                        PUSH EAX
0055A00A  6A 00                     PUSH 0x0
0055A00C  68 1B 03 00 00            PUSH 0x31b
0055A011  68 CC 92 7C 00            PUSH 0x7c92cc
0055A016  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055A01C  E8 AF 34 15 00            CALL 0x006ad4d0
0055A021  83 C4 18                  ADD ESP,0x18
0055A024  85 C0                     TEST EAX,EAX
0055A026  74 51                     JZ 0x0055a079
0055A028  CC                        INT3
LAB_0055a032:
0055A032  33 C9                     XOR ECX,ECX
LAB_0055a034:
0055A034  85 C9                     TEST ECX,ECX
0055A036  74 1E                     JZ 0x0055a056
0055A038  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0055A03B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A03E  0F AF D3                  IMUL EDX,EBX
0055A041  03 94 8F 94 00 00 00      ADD EDX,dword ptr [EDI + ECX*0x4 + 0x94]
0055A048  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
0055A04B  03 D6                     ADD EDX,ESI
0055A04D  80 F9 FF                  CMP CL,0xff
0055A050  73 04                     JNC 0x0055a056
0055A052  FE C1                     INC CL
0055A054  88 0A                     MOV byte ptr [EDX],CL
LAB_0055a056:
0055A056  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0055A059  40                        INC EAX
0055A05A  46                        INC ESI
0055A05B  3B C1                     CMP EAX,ECX
0055A05D  0F 8C 70 FF FF FF         JL 0x00559fd3
0055A063  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055A066  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055A069  03 D1                     ADD EDX,ECX
0055A06B  43                        INC EBX
0055A06C  48                        DEC EAX
0055A06D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055A070  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055A073  0F 85 55 FF FF FF         JNZ 0x00559fce
LAB_0055a079:
0055A079  5F                        POP EDI
0055A07A  5E                        POP ESI
0055A07B  5B                        POP EBX
0055A07C  8B E5                     MOV ESP,EBP
0055A07E  5D                        POP EBP
0055A07F  C2 1C 00                  RET 0x1c
