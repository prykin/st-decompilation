FUN_00559b30:
00559B30  55                        PUSH EBP
00559B31  8B EC                     MOV EBP,ESP
00559B33  83 EC 5C                  SUB ESP,0x5c
00559B36  53                        PUSH EBX
00559B37  56                        PUSH ESI
00559B38  57                        PUSH EDI
00559B39  8B F9                     MOV EDI,ECX
00559B3B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00559B3E  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
00559B44  85 C0                     TEST EAX,EAX
00559B46  0F 84 94 01 00 00         JZ 0x00559ce0
00559B4C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00559B4F  85 F6                     TEST ESI,ESI
00559B51  0F 8C 89 01 00 00         JL 0x00559ce0
00559B57  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00559B5A  83 F8 08                  CMP EAX,0x8
00559B5D  0F 83 7D 01 00 00         JNC 0x00559ce0
00559B63  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00559B69  85 C9                     TEST ECX,ECX
00559B6B  74 11                     JZ 0x00559b7e
00559B6D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00559B70  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
00559B78  0F 83 62 01 00 00         JNC 0x00559ce0
LAB_00559b7e:
00559B7E  8B 4C 87 74               MOV ECX,dword ptr [EDI + EAX*0x4 + 0x74]
00559B82  85 C9                     TEST ECX,ECX
00559B84  75 4C                     JNZ 0x00559bd2
00559B86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00559B8B  8D 55 A8                  LEA EDX,[EBP + -0x58]
00559B8E  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00559B91  6A 00                     PUSH 0x0
00559B93  52                        PUSH EDX
00559B94  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00559B97  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00559B9D  E8 4E 3C 1D 00            CALL 0x0072d7f0
00559BA2  83 C4 08                  ADD ESP,0x8
00559BA5  85 C0                     TEST EAX,EAX
00559BA7  0F 85 B9 00 00 00         JNZ 0x00559c66
00559BAD  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00559BB0  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00559BB3  0F AF 47 20               IMUL EAX,dword ptr [EDI + 0x20]
00559BB7  50                        PUSH EAX
00559BB8  E8 53 10 15 00            CALL 0x006aac10
00559BBD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559BC0  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00559BC3  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00559BC6  89 44 8F 74               MOV dword ptr [EDI + ECX*0x4 + 0x74],EAX
00559BCA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00559BD0  8B C1                     MOV EAX,ECX
LAB_00559bd2:
00559BD2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00559BD5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00559BD8  F6 C5 10                  TEST CH,0x10
00559BDB  74 18                     JZ 0x00559bf5
00559BDD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00559BE0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00559BE3  52                        PUSH EDX
00559BE4  56                        PUSH ESI
00559BE5  50                        PUSH EAX
00559BE6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00559BE9  50                        PUSH EAX
00559BEA  53                        PUSH EBX
00559BEB  51                        PUSH ECX
00559BEC  6A 03                     PUSH 0x3
00559BEE  8B CF                     MOV ECX,EDI
00559BF0  E8 0D 9F EA FF            CALL 0x00403b02
LAB_00559bf5:
00559BF5  F6 45 20 08               TEST byte ptr [EBP + 0x20],0x8
00559BF9  0F 84 E1 00 00 00         JZ 0x00559ce0
00559BFF  85 F6                     TEST ESI,ESI
00559C01  7D 05                     JGE 0x00559c08
00559C03  33 F6                     XOR ESI,ESI
00559C05  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_00559c08:
00559C08  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00559C0B  8D 54 36 01               LEA EDX,[ESI + ESI*0x1 + 0x1]
00559C0F  2B C6                     SUB EAX,ESI
00559C11  56                        PUSH ESI
00559C12  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00559C15  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00559C18  2B DE                     SUB EBX,ESI
00559C1A  E8 A0 8C EA FF            CALL 0x004028bf
00559C1F  8B C8                     MOV ECX,EAX
00559C21  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00559C24  83 C4 04                  ADD ESP,0x4
00559C27  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00559C2A  85 C0                     TEST EAX,EAX
00559C2C  0F 8E AE 00 00 00         JLE 0x00559ce0
00559C32  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00559C35  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00559c38:
00559C38  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00559C3B  33 C0                     XOR EAX,EAX
LAB_00559c3d:
00559C3D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00559C40  85 C9                     TEST ECX,ECX
00559C42  74 09                     JZ 0x00559c4d
00559C44  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00559C47  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
00559C4B  74 70                     JZ 0x00559cbd
LAB_00559c4d:
00559C4D  85 F6                     TEST ESI,ESI
00559C4F  7C 4B                     JL 0x00559c9c
00559C51  3B 77 20                  CMP ESI,dword ptr [EDI + 0x20]
00559C54  7D 46                     JGE 0x00559c9c
00559C56  85 DB                     TEST EBX,EBX
00559C58  7C 42                     JL 0x00559c9c
00559C5A  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
00559C5D  7D 3D                     JGE 0x00559c9c
00559C5F  B9 01 00 00 00            MOV ECX,0x1
00559C64  EB 38                     JMP 0x00559c9e
LAB_00559c66:
00559C66  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00559C69  68 DC 93 7C 00            PUSH 0x7c93dc
00559C6E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00559C73  50                        PUSH EAX
00559C74  6A 00                     PUSH 0x0
00559C76  68 D7 02 00 00            PUSH 0x2d7
00559C7B  68 CC 92 7C 00            PUSH 0x7c92cc
00559C80  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00559C86  E8 45 38 15 00            CALL 0x006ad4d0
00559C8B  83 C4 18                  ADD ESP,0x18
00559C8E  85 C0                     TEST EAX,EAX
00559C90  74 4E                     JZ 0x00559ce0
00559C92  CC                        INT3
LAB_00559c9c:
00559C9C  33 C9                     XOR ECX,ECX
LAB_00559c9e:
00559C9E  85 C9                     TEST ECX,ECX
00559CA0  74 1B                     JZ 0x00559cbd
00559CA2  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00559CA5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559CA8  0F AF D3                  IMUL EDX,EBX
00559CAB  03 54 8F 74               ADD EDX,dword ptr [EDI + ECX*0x4 + 0x74]
00559CAF  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
00559CB2  03 D6                     ADD EDX,ESI
00559CB4  80 F9 FF                  CMP CL,0xff
00559CB7  73 04                     JNC 0x00559cbd
00559CB9  FE C1                     INC CL
00559CBB  88 0A                     MOV byte ptr [EDX],CL
LAB_00559cbd:
00559CBD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00559CC0  40                        INC EAX
00559CC1  46                        INC ESI
00559CC2  3B C1                     CMP EAX,ECX
00559CC4  0F 8C 73 FF FF FF         JL 0x00559c3d
00559CCA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00559CCD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00559CD0  03 D1                     ADD EDX,ECX
00559CD2  43                        INC EBX
00559CD3  48                        DEC EAX
00559CD4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00559CD7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00559CDA  0F 85 58 FF FF FF         JNZ 0x00559c38
LAB_00559ce0:
00559CE0  5F                        POP EDI
00559CE1  5E                        POP ESI
00559CE2  5B                        POP EBX
00559CE3  8B E5                     MOV ESP,EBP
00559CE5  5D                        POP EBP
00559CE6  C2 1C 00                  RET 0x1c
