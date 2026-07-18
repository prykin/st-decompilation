cLoadingTy::DrawLine:
00554AD0  55                        PUSH EBP
00554AD1  8B EC                     MOV EBP,ESP
00554AD3  83 EC 48                  SUB ESP,0x48
00554AD6  56                        PUSH ESI
00554AD7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00554ADA  E8 BC D9 EA FF            CALL 0x0040249b
00554ADF  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00554AE4  8D 55 BC                  LEA EDX,[EBP + -0x44]
00554AE7  8D 4D B8                  LEA ECX,[EBP + -0x48]
00554AEA  6A 00                     PUSH 0x0
00554AEC  52                        PUSH EDX
00554AED  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00554AF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554AF6  E8 F5 8C 1D 00            CALL 0x0072d7f0
00554AFB  8B F0                     MOV ESI,EAX
00554AFD  83 C4 08                  ADD ESP,0x8
00554B00  85 F6                     TEST ESI,ESI
00554B02  0F 85 CC 00 00 00         JNZ 0x00554bd4
00554B08  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00554B0B  50                        PUSH EAX
00554B0C  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00554B0F  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00554B12  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00554B15  50                        PUSH EAX
00554B16  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00554B19  51                        PUSH ECX
00554B1A  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00554B1D  03 D1                     ADD EDX,ECX
00554B1F  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00554B22  52                        PUSH EDX
00554B23  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00554B26  03 C2                     ADD EAX,EDX
00554B28  50                        PUSH EAX
00554B29  6A 00                     PUSH 0x0
00554B2B  51                        PUSH ECX
00554B2C  E8 3F F6 15 00            CALL 0x006b4170
00554B31  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00554B34  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00554B37  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00554B3A  52                        PUSH EDX
00554B3B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00554B3E  50                        PUSH EAX
00554B3F  51                        PUSH ECX
00554B40  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00554B43  52                        PUSH EDX
00554B44  E8 77 CE 1B 00            CALL 0x007119c0
00554B49  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00554B4C  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00554B4F  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00554B52  03 C1                     ADD EAX,ECX
00554B54  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00554B57  03 CA                     ADD ECX,EDX
00554B59  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
00554B5C  52                        PUSH EDX
00554B5D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00554B60  52                        PUSH EDX
00554B61  8B 16                     MOV EDX,dword ptr [ESI]
00554B63  50                        PUSH EAX
00554B64  51                        PUSH ECX
00554B65  6A 00                     PUSH 0x0
00554B67  52                        PUSH EDX
00554B68  50                        PUSH EAX
00554B69  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554B6E  51                        PUSH ECX
00554B6F  50                        PUSH EAX
00554B70  E8 5B F7 15 00            CALL 0x006b42d0
00554B75  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00554B78  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00554B7B  6A 00                     PUSH 0x0
00554B7D  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
00554B80  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00554B83  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00554B86  03 CA                     ADD ECX,EDX
00554B88  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
00554B8B  52                        PUSH EDX
00554B8C  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00554B8F  52                        PUSH EDX
00554B90  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00554B93  50                        PUSH EAX
00554B94  51                        PUSH ECX
00554B95  6A 00                     PUSH 0x0
00554B97  52                        PUSH EDX
00554B98  50                        PUSH EAX
00554B99  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554B9E  51                        PUSH ECX
00554B9F  50                        PUSH EAX
00554BA0  E8 DB FA 15 00            CALL 0x006b4680
00554BA5  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00554BAB  6A 00                     PUSH 0x0
00554BAD  6A 00                     PUSH 0x0
00554BAF  51                        PUSH ECX
00554BB0  E8 BB 67 16 00            CALL 0x006bb370
00554BB5  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
00554BB8  85 C0                     TEST EAX,EAX
00554BBA  74 09                     JZ 0x00554bc5
00554BBC  8B 56 54                  MOV EDX,dword ptr [ESI + 0x54]
00554BBF  52                        PUSH EDX
00554BC0  FF D0                     CALL EAX
00554BC2  83 C4 04                  ADD ESP,0x4
LAB_00554bc5:
00554BC5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00554BC8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00554BCD  5E                        POP ESI
00554BCE  8B E5                     MOV ESP,EBP
00554BD0  5D                        POP EBP
00554BD1  C2 04 00                  RET 0x4
LAB_00554bd4:
00554BD4  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00554BD7  68 7C 8F 7C 00            PUSH 0x7c8f7c
00554BDC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00554BE1  56                        PUSH ESI
00554BE2  6A 00                     PUSH 0x0
00554BE4  68 CC 00 00 00            PUSH 0xcc
00554BE9  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554BEE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554BF4  E8 D7 88 15 00            CALL 0x006ad4d0
00554BF9  83 C4 18                  ADD ESP,0x18
00554BFC  85 C0                     TEST EAX,EAX
00554BFE  74 01                     JZ 0x00554c01
00554C00  CC                        INT3
LAB_00554c01:
00554C01  68 CD 00 00 00            PUSH 0xcd
00554C06  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554C0B  6A 00                     PUSH 0x0
00554C0D  56                        PUSH ESI
00554C0E  E8 2D 12 15 00            CALL 0x006a5e40
00554C13  5E                        POP ESI
00554C14  8B E5                     MOV ESP,EBP
00554C16  5D                        POP EBP
00554C17  C2 04 00                  RET 0x4
