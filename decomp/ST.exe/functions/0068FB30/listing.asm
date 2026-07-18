FUN_0068fb30:
0068FB30  55                        PUSH EBP
0068FB31  8B EC                     MOV EBP,ESP
0068FB33  83 EC 7C                  SUB ESP,0x7c
0068FB36  56                        PUSH ESI
0068FB37  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068FB3A  57                        PUSH EDI
0068FB3B  B9 0D 00 00 00            MOV ECX,0xd
0068FB40  33 C0                     XOR EAX,EAX
0068FB42  8D 7D C8                  LEA EDI,[EBP + -0x38]
0068FB45  F3 AB                     STOSD.REP ES:EDI
0068FB47  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068FB4C  8D 55 88                  LEA EDX,[EBP + -0x78]
0068FB4F  8D 4D 84                  LEA ECX,[EBP + -0x7c]
0068FB52  6A 00                     PUSH 0x0
0068FB54  52                        PUSH EDX
0068FB55  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0068FB58  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068FB5E  E8 8D DC 09 00            CALL 0x0072d7f0
0068FB63  8B F0                     MOV ESI,EAX
0068FB65  83 C4 08                  ADD ESP,0x8
0068FB68  85 F6                     TEST ESI,ESI
0068FB6A  75 6A                     JNZ 0x0068fbd6
0068FB6C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0068FB6F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068FB72  6A 0A                     PUSH 0xa
0068FB74  6A 02                     PUSH 0x2
0068FB76  8B 86 2C 01 00 00         MOV EAX,dword ptr [ESI + 0x12c]
0068FB7C  6A 0A                     PUSH 0xa
0068FB7E  6A 00                     PUSH 0x0
0068FB80  C7 45 C8 76 00 00 00      MOV dword ptr [EBP + -0x38],0x76
0068FB87  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0068FB8A  66 89 7D D1               MOV word ptr [EBP + -0x2f],DI
0068FB8E  C7 45 D3 00 00 00 00      MOV dword ptr [EBP + -0x2d],0x0
0068FB95  E8 F6 E6 01 00            CALL 0x006ae290
0068FB9A  8D 4D C8                  LEA ECX,[EBP + -0x38]
0068FB9D  89 45 D9                  MOV dword ptr [EBP + -0x27],EAX
0068FBA0  51                        PUSH ECX
0068FBA1  68 00 80 00 00            PUSH 0x8000
0068FBA6  8B CE                     MOV ECX,ESI
0068FBA8  E8 30 41 D7 FF            CALL 0x00403cdd
0068FBAD  57                        PUSH EDI
0068FBAE  8B CE                     MOV ECX,ESI
0068FBB0  E8 6E 5F D7 FF            CALL 0x00405b23
0068FBB5  85 C0                     TEST EAX,EAX
0068FBB7  74 0D                     JZ 0x0068fbc6
0068FBB9  8B 55 D9                  MOV EDX,dword ptr [EBP + -0x27]
0068FBBC  6A 00                     PUSH 0x0
0068FBBE  52                        PUSH EDX
0068FBBF  8B C8                     MOV ECX,EAX
0068FBC1  E8 24 25 D7 FF            CALL 0x004020ea
LAB_0068fbc6:
0068FBC6  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FBC9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FBCE  5F                        POP EDI
0068FBCF  5E                        POP ESI
0068FBD0  8B E5                     MOV ESP,EBP
0068FBD2  5D                        POP EBP
0068FBD3  C2 04 00                  RET 0x4
LAB_0068fbd6:
0068FBD6  8B 45 D9                  MOV EAX,dword ptr [EBP + -0x27]
0068FBD9  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0068FBDC  85 C0                     TEST EAX,EAX
0068FBDE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068FBE4  74 06                     JZ 0x0068fbec
0068FBE6  50                        PUSH EAX
0068FBE7  E8 24 E5 01 00            CALL 0x006ae110
LAB_0068fbec:
0068FBEC  68 50 58 7D 00            PUSH 0x7d5850
0068FBF1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068FBF6  56                        PUSH ESI
0068FBF7  6A 00                     PUSH 0x0
0068FBF9  68 FB 02 00 00            PUSH 0x2fb
0068FBFE  68 E0 56 7D 00            PUSH 0x7d56e0
0068FC03  E8 C8 D8 01 00            CALL 0x006ad4d0
0068FC08  83 C4 18                  ADD ESP,0x18
0068FC0B  85 C0                     TEST EAX,EAX
0068FC0D  74 01                     JZ 0x0068fc10
0068FC0F  CC                        INT3
LAB_0068fc10:
0068FC10  68 FC 02 00 00            PUSH 0x2fc
0068FC15  68 E0 56 7D 00            PUSH 0x7d56e0
0068FC1A  6A 00                     PUSH 0x0
0068FC1C  56                        PUSH ESI
0068FC1D  E8 1E 62 01 00            CALL 0x006a5e40
0068FC22  5F                        POP EDI
0068FC23  5E                        POP ESI
0068FC24  8B E5                     MOV ESP,EBP
0068FC26  5D                        POP EBP
0068FC27  C2 04 00                  RET 0x4
