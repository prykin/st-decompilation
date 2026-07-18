FUN_0058d480:
0058D480  55                        PUSH EBP
0058D481  8B EC                     MOV EBP,ESP
0058D483  51                        PUSH ECX
0058D484  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0058D487  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0058D48A  8B CA                     MOV ECX,EDX
0058D48C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0058D493  2B C8                     SUB ECX,EAX
0058D495  79 02                     JNS 0x0058d499
0058D497  33 C9                     XOR ECX,ECX
LAB_0058d499:
0058D499  53                        PUSH EBX
0058D49A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0058D49D  56                        PUSH ESI
0058D49E  8B F3                     MOV ESI,EBX
0058D4A0  2B F0                     SUB ESI,EAX
0058D4A2  57                        PUSH EDI
0058D4A3  79 02                     JNS 0x0058d4a7
0058D4A5  33 F6                     XOR ESI,ESI
LAB_0058d4a7:
0058D4A7  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0058D4AE  03 D0                     ADD EDX,EAX
0058D4B0  3B D7                     CMP EDX,EDI
0058D4B2  7C 03                     JL 0x0058d4b7
0058D4B4  8D 57 FF                  LEA EDX,[EDI + -0x1]
LAB_0058d4b7:
0058D4B7  0F BF 3D 42 B2 7F 00      MOVSX EDI,word ptr [0x007fb242]
0058D4BE  03 C3                     ADD EAX,EBX
0058D4C0  3B C7                     CMP EAX,EDI
0058D4C2  7C 03                     JL 0x0058d4c7
0058D4C4  8D 47 FF                  LEA EAX,[EDI + -0x1]
LAB_0058d4c7:
0058D4C7  8D 3C 89                  LEA EDI,[ECX + ECX*0x4]
0058D4CA  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0058D4CD  8D 1C F9                  LEA EBX,[ECX + EDI*0x8]
0058D4D0  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
0058D4D3  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058D4D6  8D 14 CA                  LEA EDX,[EDX + ECX*0x8]
0058D4D9  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0058D4DC  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0058D4DF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058D4E2  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
0058D4E5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058D4E8  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0058D4EB  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058D4EE  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0058D4F1  A1 20 17 81 00            MOV EAX,[0x00811720]
0058D4F6  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0058D4F9  8D 70 FF                  LEA ESI,[EAX + -0x1]
0058D4FC  85 F6                     TEST ESI,ESI
0058D4FE  7C 5F                     JL 0x0058d55f
0058D500  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_0058d503:
0058D503  8B 0D 1C 17 81 00         MOV ECX,dword ptr [0x0081171c]
0058D509  8B 04 B1                  MOV EAX,dword ptr [ECX + ESI*0x4]
0058D50C  0F BF 48 41               MOVSX ECX,word ptr [EAX + 0x41]
0058D510  3B CB                     CMP ECX,EBX
0058D512  7C 48                     JL 0x0058d55c
0058D514  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
0058D517  7F 43                     JG 0x0058d55c
0058D519  0F BF 48 43               MOVSX ECX,word ptr [EAX + 0x43]
0058D51D  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
0058D520  7C 3A                     JL 0x0058d55c
0058D522  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
0058D525  7F 35                     JG 0x0058d55c
0058D527  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0058D52A  83 F9 01                  CMP ECX,0x1
0058D52D  75 3A                     JNZ 0x0058d569
0058D52F  8B 40 20                  MOV EAX,dword ptr [EAX + 0x20]
0058D532  2D 0E 01 00 00            SUB EAX,0x10e
0058D537  74 05                     JZ 0x0058d53e
0058D539  83 E8 0A                  SUB EAX,0xa
0058D53C  75 0F                     JNZ 0x0058d54d
LAB_0058d53e:
0058D53E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058D544  57                        PUSH EDI
0058D545  8B 11                     MOV EDX,dword ptr [ECX]
0058D547  FF 52 18                  CALL dword ptr [EDX + 0x18]
0058D54A  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0058d54d:
0058D54D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058D553  57                        PUSH EDI
0058D554  8B 11                     MOV EDX,dword ptr [ECX]
0058D556  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_0058d559:
0058D559  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0058d55c:
0058D55C  4E                        DEC ESI
0058D55D  79 A4                     JNS 0x0058d503
LAB_0058d55f:
0058D55F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058D562  5F                        POP EDI
0058D563  5E                        POP ESI
0058D564  5B                        POP EBX
0058D565  8B E5                     MOV ESP,EBP
0058D567  5D                        POP EBP
0058D568  C3                        RET
LAB_0058d569:
0058D569  85 C9                     TEST ECX,ECX
0058D56B  75 E0                     JNZ 0x0058d54d
0058D56D  8B 40 20                  MOV EAX,dword ptr [EAX + 0x20]
0058D570  83 E8 32                  SUB EAX,0x32
0058D573  74 05                     JZ 0x0058d57a
0058D575  83 E8 5A                  SUB EAX,0x5a
0058D578  75 E2                     JNZ 0x0058d55c
LAB_0058d57a:
0058D57A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058D580  57                        PUSH EDI
0058D581  8B 01                     MOV EAX,dword ptr [ECX]
0058D583  FF 50 18                  CALL dword ptr [EAX + 0x18]
0058D586  EB D1                     JMP 0x0058d559
