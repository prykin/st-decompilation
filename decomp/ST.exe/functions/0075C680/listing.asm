FUN_0075c680:
0075C680  55                        PUSH EBP
0075C681  8B EC                     MOV EBP,ESP
0075C683  83 EC 24                  SUB ESP,0x24
0075C686  53                        PUSH EBX
0075C687  56                        PUSH ESI
0075C688  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075C68B  B8 01 00 00 00            MOV EAX,0x1
0075C690  57                        PUSH EDI
0075C691  8B 8E 8A 01 00 00         MOV ECX,dword ptr [ESI + 0x18a]
0075C697  8B BE AA 01 00 00         MOV EDI,dword ptr [ESI + 0x1aa]
0075C69D  D3 E0                     SHL EAX,CL
0075C69F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075C6A2  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0075C6A8  85 C0                     TEST EAX,EAX
0075C6AA  74 1C                     JZ 0x0075c6c8
0075C6AC  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
0075C6AF  85 C0                     TEST EAX,EAX
0075C6B1  75 15                     JNZ 0x0075c6c8
0075C6B3  56                        PUSH ESI
0075C6B4  E8 F7 FC FF FF            CALL 0x0075c3b0
0075C6B9  85 C0                     TEST EAX,EAX
0075C6BB  75 0B                     JNZ 0x0075c6c8
LAB_0075c6bd:
0075C6BD  5F                        POP EDI
0075C6BE  5E                        POP ESI
0075C6BF  33 C0                     XOR EAX,EAX
0075C6C1  5B                        POP EBX
0075C6C2  8B E5                     MOV ESP,EBP
0075C6C4  5D                        POP EBP
0075C6C5  C2 08 00                  RET 0x8
LAB_0075c6c8:
0075C6C8  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0075C6CB  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0075C6CE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0075C6D5  8B 08                     MOV ECX,dword ptr [EAX]
0075C6D7  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0075C6DA  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0075C6DD  8B 86 8E 01 00 00         MOV EAX,dword ptr [ESI + 0x18e]
0075C6E3  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0075C6E6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0075C6E9  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0075C6EC  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0075C6EF  8D 57 10                  LEA EDX,[EDI + 0x10]
0075C6F2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075C6F5  8B 96 52 01 00 00         MOV EDX,dword ptr [ESI + 0x152]
0075C6FB  85 D2                     TEST EDX,EDX
0075C6FD  7E 50                     JLE 0x0075c74f
0075C6FF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075C702  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0075c705:
0075C705  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075C708  83 F9 01                  CMP ECX,0x1
0075C70B  8B 1A                     MOV EBX,dword ptr [EDX]
0075C70D  7D 17                     JGE 0x0075c726
0075C70F  6A 01                     PUSH 0x1
0075C711  51                        PUSH ECX
0075C712  50                        PUSH EAX
0075C713  8D 45 DC                  LEA EAX,[EBP + -0x24]
0075C716  50                        PUSH EAX
0075C717  E8 04 F0 FF FF            CALL 0x0075b720
0075C71C  85 C0                     TEST EAX,EAX
0075C71E  74 9D                     JZ 0x0075c6bd
0075C720  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075C723  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_0075c726:
0075C726  49                        DEC ECX
0075C727  8B D0                     MOV EDX,EAX
0075C729  D3 FA                     SAR EDX,CL
0075C72B  F6 C2 01                  TEST DL,0x1
0075C72E  74 05                     JZ 0x0075c735
0075C730  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075C733  09 13                     OR dword ptr [EBX],EDX
LAB_0075c735:
0075C735  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075C738  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075C73B  83 C3 04                  ADD EBX,0x4
0075C73E  42                        INC EDX
0075C73F  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0075C742  8B 9E 52 01 00 00         MOV EBX,dword ptr [ESI + 0x152]
0075C748  3B D3                     CMP EDX,EBX
0075C74A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075C74D  7C B6                     JL 0x0075c705
LAB_0075c74f:
0075C74F  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
0075C752  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0075C755  89 1A                     MOV dword ptr [EDX],EBX
0075C757  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
0075C75A  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0075C75D  89 5A 04                  MOV dword ptr [EDX + 0x4],EBX
0075C760  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0075C763  89 96 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDX
0075C769  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0075C76C  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
0075C76F  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
0075C772  48                        DEC EAX
0075C773  89 47 28                  MOV dword ptr [EDI + 0x28],EAX
0075C776  5F                        POP EDI
0075C777  5E                        POP ESI
0075C778  B8 01 00 00 00            MOV EAX,0x1
0075C77D  5B                        POP EBX
0075C77E  8B E5                     MOV ESP,EBP
0075C780  5D                        POP EBP
0075C781  C2 08 00                  RET 0x8
