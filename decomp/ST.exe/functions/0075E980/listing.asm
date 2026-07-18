FUN_0075e980:
0075E980  55                        PUSH EBP
0075E981  8B EC                     MOV EBP,ESP
0075E983  81 EC 24 04 00 00         SUB ESP,0x424
0075E989  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E98C  53                        PUSH EBX
0075E98D  56                        PUSH ESI
0075E98E  57                        PUSH EDI
0075E98F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075E992  8B 48 7C                  MOV ECX,dword ptr [EAX + 0x7c]
0075E995  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075E998  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075E99B  8D 54 3F 1C               LEA EDX,[EDI + EDI*0x1 + 0x1c]
0075E99F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075E9A2  D1 FA                     SAR EDX,0x1
0075E9A4  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0075E9A7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075E9AA  8D 74 09 18               LEA ESI,[ECX + ECX*0x1 + 0x18]
0075E9AE  C7 45 FC FF FF FF 7F      MOV dword ptr [EBP + -0x4],0x7fffffff
0075E9B5  8D 54 12 18               LEA EDX,[EDX + EDX*0x1 + 0x18]
0075E9B9  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0075E9C0  D1 FE                     SAR ESI,0x1
0075E9C2  D1 FA                     SAR EDX,0x1
0075E9C4  85 DB                     TEST EBX,EBX
0075E9C6  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0075E9C9  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0075E9CC  0F 8E 29 01 00 00         JLE 0x0075eafb
0075E9D2  8B 80 80 00 00 00         MOV EAX,dword ptr [EAX + 0x80]
0075E9D8  8D 95 DC FB FF FF         LEA EDX,[EBP + 0xfffffbdc]
0075E9DE  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E9E1  8B 10                     MOV EDX,dword ptr [EAX]
0075E9E3  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0075E9E6  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0075E9E9  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0075E9EC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075E9EF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075E9F2  EB 06                     JMP 0x0075e9fa
LAB_0075e9f4:
0075E9F4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075E9F7  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
LAB_0075e9fa:
0075E9FA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075E9FD  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075EA00  33 C0                     XOR EAX,EAX
0075EA02  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
0075EA05  3B C1                     CMP EAX,ECX
0075EA07  7D 33                     JGE 0x0075ea3c
0075EA09  8B D0                     MOV EDX,EAX
0075EA0B  2B D1                     SUB EDX,ECX
0075EA0D  0F AF D2                  IMUL EDX,EDX
0075EA10  83 C1 18                  ADD ECX,0x18
LAB_0075ea13:
0075EA13  2B C1                     SUB EAX,ECX
LAB_0075ea15:
0075EA15  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075EA18  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075EA1B  33 C9                     XOR ECX,ECX
0075EA1D  0F AF C0                  IMUL EAX,EAX
0075EA20  8A 0C 1E                  MOV CL,byte ptr [ESI + EBX*0x1]
0075EA23  3B CF                     CMP ECX,EDI
0075EA25  7D 2F                     JGE 0x0075ea56
0075EA27  8B F1                     MOV ESI,ECX
0075EA29  2B F7                     SUB ESI,EDI
0075EA2B  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
0075EA2E  8B DE                     MOV EBX,ESI
0075EA30  0F AF DE                  IMUL EBX,ESI
0075EA33  8D 77 1C                  LEA ESI,[EDI + 0x1c]
0075EA36  03 D3                     ADD EDX,EBX
0075EA38  2B CE                     SUB ECX,ESI
0075EA3A  EB 31                     JMP 0x0075ea6d
LAB_0075ea3c:
0075EA3C  8D 59 18                  LEA EBX,[ECX + 0x18]
0075EA3F  3B C3                     CMP EAX,EBX
0075EA41  7E 09                     JLE 0x0075ea4c
0075EA43  8B D0                     MOV EDX,EAX
0075EA45  2B D3                     SUB EDX,EBX
0075EA47  0F AF D2                  IMUL EDX,EDX
0075EA4A  EB C7                     JMP 0x0075ea13
LAB_0075ea4c:
0075EA4C  33 D2                     XOR EDX,EDX
0075EA4E  3B C6                     CMP EAX,ESI
0075EA50  7F C1                     JG 0x0075ea13
0075EA52  2B C3                     SUB EAX,EBX
0075EA54  EB BF                     JMP 0x0075ea15
LAB_0075ea56:
0075EA56  8D 5F 1C                  LEA EBX,[EDI + 0x1c]
0075EA59  3B CB                     CMP ECX,EBX
0075EA5B  7E 43                     JLE 0x0075eaa0
0075EA5D  8B F1                     MOV ESI,ECX
0075EA5F  2B F3                     SUB ESI,EBX
0075EA61  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
0075EA64  8B DE                     MOV EBX,ESI
0075EA66  0F AF DE                  IMUL EBX,ESI
0075EA69  03 D3                     ADD EDX,EBX
LAB_0075ea6b:
0075EA6B  2B CF                     SUB ECX,EDI
LAB_0075ea6d:
0075EA6D  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0075EA70  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075EA73  8B F1                     MOV ESI,ECX
0075EA75  0F AF F1                  IMUL ESI,ECX
0075EA78  03 C6                     ADD EAX,ESI
0075EA7A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0075EA7D  33 C9                     XOR ECX,ECX
0075EA7F  8A 0C 1E                  MOV CL,byte ptr [ESI + EBX*0x1]
0075EA82  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0075EA85  3B CB                     CMP ECX,EBX
0075EA87  7D 20                     JGE 0x0075eaa9
0075EA89  8B F1                     MOV ESI,ECX
0075EA8B  2B F3                     SUB ESI,EBX
0075EA8D  D1 E6                     SHL ESI,0x1
0075EA8F  8B DE                     MOV EBX,ESI
0075EA91  0F AF DE                  IMUL EBX,ESI
0075EA94  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0075EA97  03 D3                     ADD EDX,EBX
0075EA99  83 C6 18                  ADD ESI,0x18
0075EA9C  2B CE                     SUB ECX,ESI
0075EA9E  EB 28                     JMP 0x0075eac8
LAB_0075eaa0:
0075EAA0  3B 4D E4                  CMP ECX,dword ptr [EBP + -0x1c]
0075EAA3  7F C6                     JG 0x0075ea6b
0075EAA5  2B CB                     SUB ECX,EBX
0075EAA7  EB C4                     JMP 0x0075ea6d
LAB_0075eaa9:
0075EAA9  8D 73 18                  LEA ESI,[EBX + 0x18]
0075EAAC  3B CE                     CMP ECX,ESI
0075EAAE  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0075EAB1  7E 75                     JLE 0x0075eb28
0075EAB3  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0075EAB6  8B F1                     MOV ESI,ECX
0075EAB8  2B F3                     SUB ESI,EBX
0075EABA  D1 E6                     SHL ESI,0x1
0075EABC  8B DE                     MOV EBX,ESI
0075EABE  0F AF DE                  IMUL EBX,ESI
0075EAC1  03 D3                     ADD EDX,EBX
0075EAC3  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_0075eac6:
0075EAC6  2B CB                     SUB ECX,EBX
LAB_0075eac8:
0075EAC8  D1 E1                     SHL ECX,0x1
0075EACA  8B F1                     MOV ESI,ECX
0075EACC  0F AF F1                  IMUL ESI,ECX
0075EACF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075EAD2  03 C6                     ADD EAX,ESI
0075EAD4  89 11                     MOV dword ptr [ECX],EDX
0075EAD6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075EAD9  3B C1                     CMP EAX,ECX
0075EADB  7D 03                     JGE 0x0075eae0
0075EADD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0075eae0:
0075EAE0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075EAE3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075EAE6  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075EAE9  40                        INC EAX
0075EAEA  83 C2 04                  ADD EDX,0x4
0075EAED  3B C3                     CMP EAX,EBX
0075EAEF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075EAF2  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075EAF5  0F 8C F9 FE FF FF         JL 0x0075e9f4
LAB_0075eafb:
0075EAFB  33 C0                     XOR EAX,EAX
0075EAFD  33 C9                     XOR ECX,ECX
0075EAFF  85 DB                     TEST EBX,EBX
0075EB01  7E 1C                     JLE 0x0075eb1f
0075EB03  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0075EB06  8D 95 DC FB FF FF         LEA EDX,[EBP + 0xfffffbdc]
LAB_0075eb0c:
0075EB0C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0075EB0F  39 3A                     CMP dword ptr [EDX],EDI
0075EB11  7F 04                     JG 0x0075eb17
0075EB13  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
0075EB16  40                        INC EAX
LAB_0075eb17:
0075EB17  41                        INC ECX
0075EB18  83 C2 04                  ADD EDX,0x4
0075EB1B  3B CB                     CMP ECX,EBX
0075EB1D  7C ED                     JL 0x0075eb0c
LAB_0075eb1f:
0075EB1F  5F                        POP EDI
0075EB20  5E                        POP ESI
0075EB21  5B                        POP EBX
0075EB22  8B E5                     MOV ESP,EBP
0075EB24  5D                        POP EBP
0075EB25  C2 14 00                  RET 0x14
LAB_0075eb28:
0075EB28  3B 4D E0                  CMP ECX,dword ptr [EBP + -0x20]
0075EB2B  7F 99                     JG 0x0075eac6
0075EB2D  2B CE                     SUB ECX,ESI
0075EB2F  EB 97                     JMP 0x0075eac8
