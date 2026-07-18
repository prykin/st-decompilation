FUN_0075a670:
0075A670  55                        PUSH EBP
0075A671  8B EC                     MOV EBP,ESP
0075A673  51                        PUSH ECX
0075A674  53                        PUSH EBX
0075A675  56                        PUSH ESI
0075A676  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075A679  57                        PUSH EDI
0075A67A  6A 74                     PUSH 0x74
0075A67C  6A 01                     PUSH 0x1
0075A67E  8B 06                     MOV EAX,dword ptr [ESI]
0075A680  56                        PUSH ESI
0075A681  FF 10                     CALL dword ptr [EAX]
0075A683  8B D8                     MOV EBX,EAX
0075A685  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075A688  33 FF                     XOR EDI,EDI
0075A68A  89 9E 9A 01 00 00         MOV dword ptr [ESI + 0x19a],EBX
0075A690  3B C7                     CMP EAX,EDI
0075A692  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075A695  C7 03 80 A7 75 00         MOV dword ptr [EBX],0x75a780
0075A69B  C7 43 08 00 A8 75 00      MOV dword ptr [EBX + 0x8],0x75a800
0075A6A2  89 7B 70                  MOV dword ptr [EBX + 0x70],EDI
0075A6A5  0F 84 8A 00 00 00         JZ 0x0075a735
0075A6AB  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0075A6AE  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0075A6B4  3B CF                     CMP ECX,EDI
0075A6B6  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0075A6B9  7E 5D                     JLE 0x0075a718
0075A6BB  83 C3 48                  ADD EBX,0x48
0075A6BE  8D 78 0C                  LEA EDI,[EAX + 0xc]
0075A6C1  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
LAB_0075a6c4:
0075A6C4  8B 96 D4 00 00 00         MOV EDX,dword ptr [ESI + 0xd4]
0075A6CA  8B 07                     MOV EAX,dword ptr [EDI]
0075A6CC  85 D2                     TEST EDX,EDX
0075A6CE  8B C8                     MOV ECX,EAX
0075A6D0  74 03                     JZ 0x0075a6d5
0075A6D2  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
LAB_0075a6d5:
0075A6D5  8B 1E                     MOV EBX,dword ptr [ESI]
0075A6D7  51                        PUSH ECX
0075A6D8  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0075A6DB  50                        PUSH EAX
0075A6DC  51                        PUSH ECX
0075A6DD  E8 AE F7 FF FF            CALL 0x00759e90
0075A6E2  8B 57 FC                  MOV EDX,dword ptr [EDI + -0x4]
0075A6E5  50                        PUSH EAX
0075A6E6  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0075A6E9  52                        PUSH EDX
0075A6EA  50                        PUSH EAX
0075A6EB  E8 A0 F7 FF FF            CALL 0x00759e90
0075A6F0  50                        PUSH EAX
0075A6F1  6A 01                     PUSH 0x1
0075A6F3  6A 01                     PUSH 0x1
0075A6F5  56                        PUSH ESI
0075A6F6  FF 53 14                  CALL dword ptr [EBX + 0x14]
0075A6F9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075A6FC  83 C7 54                  ADD EDI,0x54
0075A6FF  89 01                     MOV dword ptr [ECX],EAX
0075A701  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075A704  83 C1 04                  ADD ECX,0x4
0075A707  40                        INC EAX
0075A708  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0075A70B  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0075A70E  3B C1                     CMP EAX,ECX
0075A710  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075A713  7C AF                     JL 0x0075a6c4
0075A715  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0075a718:
0075A718  8D 4B 48                  LEA ECX,[EBX + 0x48]
0075A71B  5F                        POP EDI
0075A71C  C7 43 04 B0 AA 75 00      MOV dword ptr [EBX + 0x4],0x75aab0
0075A723  C7 43 0C B0 AC 75 00      MOV dword ptr [EBX + 0xc],0x75acb0
0075A72A  89 4B 10                  MOV dword ptr [EBX + 0x10],ECX
0075A72D  5E                        POP ESI
0075A72E  5B                        POP EBX
0075A72F  8B E5                     MOV ESP,EBP
0075A731  5D                        POP EBP
0075A732  C2 08 00                  RET 0x8
LAB_0075a735:
0075A735  8B 16                     MOV EDX,dword ptr [ESI]
0075A737  68 00 0A 00 00            PUSH 0xa00
0075A73C  6A 01                     PUSH 0x1
0075A73E  56                        PUSH ESI
0075A73F  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075A742  8D 4B 20                  LEA ECX,[EBX + 0x20]
0075A745  BA 0A 00 00 00            MOV EDX,0xa
LAB_0075a74a:
0075A74A  89 01                     MOV dword ptr [ECX],EAX
0075A74C  83 C1 04                  ADD ECX,0x4
0075A74F  05 00 01 00 00            ADD EAX,0x100
0075A754  4A                        DEC EDX
0075A755  75 F3                     JNZ 0x0075a74a
0075A757  89 7B 10                  MOV dword ptr [EBX + 0x10],EDI
0075A75A  5F                        POP EDI
0075A75B  C7 43 04 A0 AA 75 00      MOV dword ptr [EBX + 0x4],0x75aaa0
0075A762  C7 43 0C 60 A8 75 00      MOV dword ptr [EBX + 0xc],0x75a860
0075A769  5E                        POP ESI
0075A76A  5B                        POP EBX
0075A76B  8B E5                     MOV ESP,EBP
0075A76D  5D                        POP EBP
0075A76E  C2 08 00                  RET 0x8
