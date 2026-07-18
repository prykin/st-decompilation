FUN_00721a20:
00721A20  55                        PUSH EBP
00721A21  8B EC                     MOV EBP,ESP
00721A23  83 EC 20                  SUB ESP,0x20
00721A26  56                        PUSH ESI
00721A27  8B F1                     MOV ESI,ECX
00721A29  57                        PUSH EDI
00721A2A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00721A2D  8B 86 FC 01 00 00         MOV EAX,dword ptr [ESI + 0x1fc]
00721A33  85 C0                     TEST EAX,EAX
00721A35  0F 84 B6 00 00 00         JZ 0x00721af1
00721A3B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00721A3E  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721A44  85 C0                     TEST EAX,EAX
00721A46  C7 45 EC 02 00 00 80      MOV dword ptr [EBP + -0x14],0x80000002
00721A4D  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
00721A54  0F 84 85 00 00 00         JZ 0x00721adf
00721A5A  8D 45 E0                  LEA EAX,[EBP + -0x20]
00721A5D  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00721A64  50                        PUSH EAX
00721A65  E8 F6 45 FC FF            CALL 0x006e6060
00721A6A  85 FF                     TEST EDI,EDI
00721A6C  74 3D                     JZ 0x00721aab
00721A6E  8A 46 20                  MOV AL,byte ptr [ESI + 0x20]
00721A71  C7 45 F0 28 00 00 00      MOV dword ptr [EBP + -0x10],0x28
00721A78  A8 04                     TEST AL,0x4
00721A7A  74 18                     JZ 0x00721a94
00721A7C  8B CE                     MOV ECX,ESI
00721A7E  E8 AD F2 FF FF            CALL 0x00720d30
00721A83  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
00721A89  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00721A8C  2B D0                     SUB EDX,EAX
00721A8E  42                        INC EDX
00721A8F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00721A92  EB 0C                     JMP 0x00721aa0
LAB_00721a94:
00721A94  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721A9A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00721A9D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00721aa0:
00721AA0  8D 55 E0                  LEA EDX,[EBP + -0x20]
00721AA3  8B CE                     MOV ECX,ESI
00721AA5  52                        PUSH EDX
00721AA6  E8 B5 45 FC FF            CALL 0x006e6060
LAB_00721aab:
00721AAB  8A 46 20                  MOV AL,byte ptr [ESI + 0x20]
00721AAE  C7 45 F0 22 00 00 00      MOV dword ptr [EBP + -0x10],0x22
00721AB5  A8 04                     TEST AL,0x4
00721AB7  74 0F                     JZ 0x00721ac8
00721AB9  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
00721ABF  8D 55 E0                  LEA EDX,[EBP + -0x20]
00721AC2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00721AC5  52                        PUSH EDX
00721AC6  EB 22                     JMP 0x00721aea
LAB_00721ac8:
00721AC8  8B 8E 0C 02 00 00         MOV ECX,dword ptr [ESI + 0x20c]
00721ACE  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
00721AD4  03 C8                     ADD ECX,EAX
00721AD6  8D 55 E0                  LEA EDX,[EBP + -0x20]
00721AD9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00721ADC  52                        PUSH EDX
00721ADD  EB 0B                     JMP 0x00721aea
LAB_00721adf:
00721ADF  8D 45 E0                  LEA EAX,[EBP + -0x20]
00721AE2  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00721AE9  50                        PUSH EAX
LAB_00721aea:
00721AEA  8B CE                     MOV ECX,ESI
00721AEC  E8 6F 45 FC FF            CALL 0x006e6060
LAB_00721af1:
00721AF1  8B 86 00 02 00 00         MOV EAX,dword ptr [ESI + 0x200]
00721AF7  85 C0                     TEST EAX,EAX
00721AF9  0F 84 DC 00 00 00         JZ 0x00721bdb
00721AFF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00721B02  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721B08  85 C0                     TEST EAX,EAX
00721B0A  C7 45 EC 02 00 00 80      MOV dword ptr [EBP + -0x14],0x80000002
00721B11  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
00721B18  0F 84 AB 00 00 00         JZ 0x00721bc9
00721B1E  8D 4D E0                  LEA ECX,[EBP + -0x20]
00721B21  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00721B28  51                        PUSH ECX
00721B29  8B CE                     MOV ECX,ESI
00721B2B  E8 30 45 FC FF            CALL 0x006e6060
00721B30  85 FF                     TEST EDI,EDI
00721B32  74 47                     JZ 0x00721b7b
00721B34  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721B3A  85 C0                     TEST EAX,EAX
00721B3C  75 3D                     JNZ 0x00721b7b
00721B3E  8A 46 20                  MOV AL,byte ptr [ESI + 0x20]
00721B41  C7 45 F0 28 00 00 00      MOV dword ptr [EBP + -0x10],0x28
00721B48  A8 04                     TEST AL,0x4
00721B4A  8B CE                     MOV ECX,ESI
00721B4C  74 1A                     JZ 0x00721b68
00721B4E  E8 8D F2 FF FF            CALL 0x00720de0
00721B53  BF 01 00 00 00            MOV EDI,0x1
00721B58  8B CE                     MOV ECX,ESI
00721B5A  2B F8                     SUB EDI,EAX
00721B5C  E8 3F FE FF FF            CALL 0x007219a0
00721B61  03 F8                     ADD EDI,EAX
00721B63  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00721B66  EB 08                     JMP 0x00721b70
LAB_00721b68:
00721B68  E8 33 FE FF FF            CALL 0x007219a0
00721B6D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00721b70:
00721B70  8D 55 E0                  LEA EDX,[EBP + -0x20]
00721B73  8B CE                     MOV ECX,ESI
00721B75  52                        PUSH EDX
00721B76  E8 E5 44 FC FF            CALL 0x006e6060
LAB_00721b7b:
00721B7B  8A 46 20                  MOV AL,byte ptr [ESI + 0x20]
00721B7E  C7 45 F0 22 00 00 00      MOV dword ptr [EBP + -0x10],0x22
00721B85  A8 04                     TEST AL,0x4
00721B87  74 1C                     JZ 0x00721ba5
00721B89  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
00721B8F  8D 55 E0                  LEA EDX,[EBP + -0x20]
00721B92  52                        PUSH EDX
00721B93  8B CE                     MOV ECX,ESI
00721B95  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00721B98  E8 C3 44 FC FF            CALL 0x006e6060
00721B9D  5F                        POP EDI
00721B9E  5E                        POP ESI
00721B9F  8B E5                     MOV ESP,EBP
00721BA1  5D                        POP EBP
00721BA2  C2 04 00                  RET 0x4
LAB_00721ba5:
00721BA5  8B 8E 10 02 00 00         MOV ECX,dword ptr [ESI + 0x210]
00721BAB  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
00721BB1  03 C8                     ADD ECX,EAX
00721BB3  8D 55 E0                  LEA EDX,[EBP + -0x20]
00721BB6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00721BB9  52                        PUSH EDX
00721BBA  8B CE                     MOV ECX,ESI
00721BBC  E8 9F 44 FC FF            CALL 0x006e6060
00721BC1  5F                        POP EDI
00721BC2  5E                        POP ESI
00721BC3  8B E5                     MOV ESP,EBP
00721BC5  5D                        POP EBP
00721BC6  C2 04 00                  RET 0x4
LAB_00721bc9:
00721BC9  8D 45 E0                  LEA EAX,[EBP + -0x20]
00721BCC  8B CE                     MOV ECX,ESI
00721BCE  50                        PUSH EAX
00721BCF  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00721BD6  E8 85 44 FC FF            CALL 0x006e6060
LAB_00721bdb:
00721BDB  5F                        POP EDI
00721BDC  5E                        POP ESI
00721BDD  8B E5                     MOV ESP,EBP
00721BDF  5D                        POP EBP
00721BE0  C2 04 00                  RET 0x4
