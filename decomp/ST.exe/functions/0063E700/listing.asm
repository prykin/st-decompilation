FUN_0063e700:
0063E700  55                        PUSH EBP
0063E701  8B EC                     MOV EBP,ESP
0063E703  83 EC 38                  SUB ESP,0x38
0063E706  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0063E709  53                        PUSH EBX
0063E70A  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0063E70D  56                        PUSH ESI
0063E70E  8B F1                     MOV ESI,ECX
0063E710  57                        PUSH EDI
0063E711  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063E714  8B FA                     MOV EDI,EDX
0063E716  8B C1                     MOV EAX,ECX
0063E718  2B FB                     SUB EDI,EBX
0063E71A  2B C3                     SUB EAX,EBX
0063E71C  8D 4C 19 01               LEA ECX,[ECX + EBX*0x1 + 0x1]
0063E720  8D 54 1A 01               LEA EDX,[EDX + EBX*0x1 + 0x1]
0063E724  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0063E72B  85 C0                     TEST EAX,EAX
0063E72D  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0063E730  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0063E733  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0063E736  7D 02                     JGE 0x0063e73a
0063E738  33 C0                     XOR EAX,EAX
LAB_0063e73a:
0063E73A  85 FF                     TEST EDI,EDI
0063E73C  7D 0A                     JGE 0x0063e748
0063E73E  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0063E745  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0063e748:
0063E748  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
0063E74F  39 4D F0                  CMP dword ptr [EBP + -0x10],ECX
0063E752  7E 03                     JLE 0x0063e757
0063E754  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0063e757:
0063E757  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0063E75E  0F BF D1                  MOVSX EDX,CX
0063E761  39 55 F4                  CMP dword ptr [EBP + -0xc],EDX
0063E764  7E 03                     JLE 0x0063e769
0063E766  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0063e769:
0063E769  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0063E76C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063E76F  3B C2                     CMP EAX,EDX
0063E771  0F 8D 7C 01 00 00         JGE 0x0063e8f3
LAB_0063e777:
0063E777  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063E77A  8B DF                     MOV EBX,EDI
0063E77C  3B FA                     CMP EDI,EDX
0063E77E  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0063E781  0F 8D 5A 01 00 00         JGE 0x0063e8e1
LAB_0063e787:
0063E787  33 FF                     XOR EDI,EDI
LAB_0063e789:
0063E789  66 85 DB                  TEST BX,BX
0063E78C  0F 8C 33 01 00 00         JL 0x0063e8c5
0063E792  66 3B D9                  CMP BX,CX
0063E795  0F 8D 8D 00 00 00         JGE 0x0063e828
0063E79B  66 85 C0                  TEST AX,AX
0063E79E  0F 8C 84 00 00 00         JL 0x0063e828
0063E7A4  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0063E7AB  7D 7B                     JGE 0x0063e828
0063E7AD  66 85 FF                  TEST DI,DI
0063E7B0  7C 76                     JL 0x0063e828
0063E7B2  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
0063E7B9  7D 6D                     JGE 0x0063e828
0063E7BB  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0063E7C2  0F BF C0                  MOVSX EAX,AX
0063E7C5  0F BF D1                  MOVSX EDX,CX
0063E7C8  0F AF C2                  IMUL EAX,EDX
0063E7CB  0F BF D7                  MOVSX EDX,DI
0063E7CE  0F AF D3                  IMUL EDX,EBX
0063E7D1  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0063E7D4  03 C2                     ADD EAX,EDX
0063E7D6  0F BF D3                  MOVSX EDX,BX
0063E7D9  03 C2                     ADD EAX,EDX
0063E7DB  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0063E7E1  8B 44 C2 04               MOV EAX,dword ptr [EDX + EAX*0x8 + 0x4]
0063E7E5  85 C0                     TEST EAX,EAX
0063E7E7  74 3C                     JZ 0x0063e825
0063E7E9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063E7EC  8B 96 5D 02 00 00         MOV EDX,dword ptr [ESI + 0x25d]
0063E7F2  41                        INC ECX
0063E7F3  68 28 01 00 00            PUSH 0x128
0063E7F8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063E7FB  66 8B 8E 61 02 00 00      MOV CX,word ptr [ESI + 0x261]
0063E802  68 A8 00 00 00            PUSH 0xa8
0063E807  51                        PUSH ECX
0063E808  52                        PUSH EDX
0063E809  50                        PUSH EAX
0063E80A  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0063E810  6A 00                     PUSH 0x0
0063E812  50                        PUSH EAX
0063E813  8D 8E 83 03 00 00         LEA ECX,[ESI + 0x383]
0063E819  E8 04 56 DC FF            CALL 0x00403e22
0063E81E  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
LAB_0063e825:
0063E825  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0063e828:
0063E828  66 85 DB                  TEST BX,BX
0063E82B  0F 8C 94 00 00 00         JL 0x0063e8c5
0063E831  66 3B D9                  CMP BX,CX
0063E834  0F 8D 8B 00 00 00         JGE 0x0063e8c5
0063E83A  66 85 C0                  TEST AX,AX
0063E83D  0F 8C 82 00 00 00         JL 0x0063e8c5
0063E843  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0063E84A  7D 79                     JGE 0x0063e8c5
0063E84C  66 85 FF                  TEST DI,DI
0063E84F  7C 74                     JL 0x0063e8c5
0063E851  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
0063E858  7D 6B                     JGE 0x0063e8c5
0063E85A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0063E861  0F BF D0                  MOVSX EDX,AX
0063E864  0F BF C1                  MOVSX EAX,CX
0063E867  0F AF D0                  IMUL EDX,EAX
0063E86A  0F BF C7                  MOVSX EAX,DI
0063E86D  0F AF C3                  IMUL EAX,EBX
0063E870  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0063E873  03 D0                     ADD EDX,EAX
0063E875  0F BF C3                  MOVSX EAX,BX
0063E878  03 D0                     ADD EDX,EAX
0063E87A  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0063E87F  8B 04 D0                  MOV EAX,dword ptr [EAX + EDX*0x8]
0063E882  85 C0                     TEST EAX,EAX
0063E884  74 3C                     JZ 0x0063e8c2
0063E886  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063E889  8B 96 5D 02 00 00         MOV EDX,dword ptr [ESI + 0x25d]
0063E88F  41                        INC ECX
0063E890  68 28 01 00 00            PUSH 0x128
0063E895  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063E898  66 8B 8E 61 02 00 00      MOV CX,word ptr [ESI + 0x261]
0063E89F  68 A8 00 00 00            PUSH 0xa8
0063E8A4  51                        PUSH ECX
0063E8A5  52                        PUSH EDX
0063E8A6  50                        PUSH EAX
0063E8A7  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0063E8AD  6A 00                     PUSH 0x0
0063E8AF  50                        PUSH EAX
0063E8B0  8D 8E 83 03 00 00         LEA ECX,[ESI + 0x383]
0063E8B6  E8 67 55 DC FF            CALL 0x00403e22
0063E8BB  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
LAB_0063e8c2:
0063E8C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0063e8c5:
0063E8C5  47                        INC EDI
0063E8C6  83 FF 05                  CMP EDI,0x5
0063E8C9  0F 8C BA FE FF FF         JL 0x0063e789
0063E8CF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063E8D2  43                        INC EBX
0063E8D3  3B DA                     CMP EBX,EDX
0063E8D5  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0063E8D8  0F 8C A9 FE FF FF         JL 0x0063e787
0063E8DE  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0063e8e1:
0063E8E1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0063E8E4  40                        INC EAX
0063E8E5  3B C2                     CMP EAX,EDX
0063E8E7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063E8EA  0F 8C 87 FE FF FF         JL 0x0063e777
0063E8F0  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_0063e8f3:
0063E8F3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0063E8F6  B9 08 00 00 00            MOV ECX,0x8
0063E8FB  33 C0                     XOR EAX,EAX
0063E8FD  8D 7D C8                  LEA EDI,[EBP + -0x38]
0063E900  F3 AB                     STOSD.REP ES:EDI
0063E902  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063E905  8D 4D C8                  LEA ECX,[EBP + -0x38]
0063E908  6A 01                     PUSH 0x1
0063E90A  51                        PUSH ECX
0063E90B  53                        PUSH EBX
0063E90C  52                        PUSH EDX
0063E90D  50                        PUSH EAX
0063E90E  C7 45 D4 02 00 00 00      MOV dword ptr [EBP + -0x2c],0x2
0063E915  C7 45 D8 28 01 00 00      MOV dword ptr [EBP + -0x28],0x128
0063E91C  E8 4F 52 DC FF            CALL 0x00403b70
0063E921  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063E924  83 C4 14                  ADD ESP,0x14
0063E927  5F                        POP EDI
0063E928  5E                        POP ESI
0063E929  5B                        POP EBX
0063E92A  8B E5                     MOV ESP,EBP
0063E92C  5D                        POP EBP
0063E92D  C2 10 00                  RET 0x10
