FUN_004d8b70:
004D8B70  55                        PUSH EBP
004D8B71  8B EC                     MOV EBP,ESP
004D8B73  51                        PUSH ECX
004D8B74  53                        PUSH EBX
004D8B75  57                        PUSH EDI
004D8B76  0F BE 7D 08               MOVSX EDI,byte ptr [EBP + 0x8]
004D8B7A  8B D9                     MOV EBX,ECX
004D8B7C  81 FF FF 00 00 00         CMP EDI,0xff
004D8B82  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004D8B85  75 0A                     JNZ 0x004d8b91
004D8B87  5F                        POP EDI
004D8B88  33 C0                     XOR EAX,EAX
004D8B8A  5B                        POP EBX
004D8B8B  8B E5                     MOV ESP,EBP
004D8B8D  5D                        POP EBP
004D8B8E  C2 04 00                  RET 0x4
LAB_004d8b91:
004D8B91  33 C0                     XOR EAX,EAX
004D8B93  56                        PUSH ESI
004D8B94  A0 4D 87 80 00            MOV AL,[0x0080874d]
004D8B99  3B F8                     CMP EDI,EAX
004D8B9B  0F 85 FE 00 00 00         JNZ 0x004d8c9f
004D8BA1  8B 0D D4 16 80 00         MOV ECX,dword ptr [0x008016d4]
004D8BA7  85 C9                     TEST ECX,ECX
004D8BA9  0F 84 F0 00 00 00         JZ 0x004d8c9f
004D8BAF  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
004D8BB2  8D 04 D7                  LEA EAX,[EDI + EDX*0x8]
004D8BB5  8D 34 47                  LEA ESI,[EDI + EAX*0x2]
004D8BB8  C1 E6 04                  SHL ESI,0x4
004D8BBB  03 F7                     ADD ESI,EDI
004D8BBD  D1 E6                     SHL ESI,0x1
004D8BBF  80 BE 20 4E 7F 00 03      CMP byte ptr [ESI + 0x7f4e20],0x3
004D8BC6  75 60                     JNZ 0x004d8c28
004D8BC8  57                        PUSH EDI
004D8BC9  8B CB                     MOV ECX,EBX
004D8BCB  E8 D7 AA F2 FF            CALL 0x004036a7
004D8BD0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004D8BD3  57                        PUSH EDI
004D8BD4  C1 E2 02                  SHL EDX,0x2
004D8BD7  8B CB                     MOV ECX,EBX
004D8BD9  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004D8BDC  E8 9F D1 F2 FF            CALL 0x00405d80
004D8BE1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D8BE4  8B C8                     MOV ECX,EAX
004D8BE6  8B C2                     MOV EAX,EDX
004D8BE8  99                        CDQ
004D8BE9  F7 F9                     IDIV ECX
004D8BEB  83 F8 14                  CMP EAX,0x14
004D8BEE  7E 05                     JLE 0x004d8bf5
004D8BF0  B8 14 00 00 00            MOV EAX,0x14
LAB_004d8bf5:
004D8BF5  8B 8E 43 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e43]
004D8BFB  6A 00                     PUSH 0x0
004D8BFD  6A 01                     PUSH 0x1
004D8BFF  50                        PUSH EAX
004D8C00  8B 86 BE 57 7F 00         MOV EAX,dword ptr [ESI + 0x7f57be]
004D8C06  50                        PUSH EAX
004D8C07  51                        PUSH ECX
004D8C08  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D8C0B  57                        PUSH EDI
004D8C0C  E8 96 AA F2 FF            CALL 0x004036a7
004D8C11  8B 0D D4 16 80 00         MOV ECX,dword ptr [0x008016d4]
004D8C17  50                        PUSH EAX
004D8C18  E8 66 92 F2 FF            CALL 0x00401e83
004D8C1D  5E                        POP ESI
004D8C1E  5F                        POP EDI
004D8C1F  33 C0                     XOR EAX,EAX
004D8C21  5B                        POP EBX
004D8C22  8B E5                     MOV ESP,EBP
004D8C24  5D                        POP EBP
004D8C25  C2 04 00                  RET 0x4
LAB_004d8c28:
004D8C28  8B BE 92 57 7F 00         MOV EDI,dword ptr [ESI + 0x7f5792]
004D8C2E  8B 96 96 57 7F 00         MOV EDX,dword ptr [ESI + 0x7f5796]
004D8C34  8B C7                     MOV EAX,EDI
004D8C36  2B C2                     SUB EAX,EDX
004D8C38  79 2B                     JNS 0x004d8c65
004D8C3A  8B 96 47 4E 7F 00         MOV EDX,dword ptr [ESI + 0x7f4e47]
004D8C40  8B 86 43 4E 7F 00         MOV EAX,dword ptr [ESI + 0x7f4e43]
004D8C46  6A 00                     PUSH 0x0
004D8C48  6A 00                     PUSH 0x0
004D8C4A  6A 0D                     PUSH 0xd
004D8C4C  52                        PUSH EDX
004D8C4D  8B 96 3F 4E 7F 00         MOV EDX,dword ptr [ESI + 0x7f4e3f]
004D8C53  50                        PUSH EAX
004D8C54  52                        PUSH EDX
004D8C55  E8 29 92 F2 FF            CALL 0x00401e83
004D8C5A  5E                        POP ESI
004D8C5B  5F                        POP EDI
004D8C5C  33 C0                     XOR EAX,EAX
004D8C5E  5B                        POP EBX
004D8C5F  8B E5                     MOV ESP,EBP
004D8C61  5D                        POP EBP
004D8C62  C2 04 00                  RET 0x4
LAB_004d8c65:
004D8C65  85 FF                     TEST EDI,EDI
004D8C67  74 17                     JZ 0x004d8c80
004D8C69  85 C0                     TEST EAX,EAX
004D8C6B  74 13                     JZ 0x004d8c80
004D8C6D  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D8C70  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
004D8C73  99                        CDQ
004D8C74  F7 FF                     IDIV EDI
004D8C76  83 F8 0D                  CMP EAX,0xd
004D8C79  7E 05                     JLE 0x004d8c80
004D8C7B  B8 0D 00 00 00            MOV EAX,0xd
LAB_004d8c80:
004D8C80  8B 96 43 4E 7F 00         MOV EDX,dword ptr [ESI + 0x7f4e43]
004D8C86  6A 00                     PUSH 0x0
004D8C88  6A 01                     PUSH 0x1
004D8C8A  50                        PUSH EAX
004D8C8B  8B 86 47 4E 7F 00         MOV EAX,dword ptr [ESI + 0x7f4e47]
004D8C91  50                        PUSH EAX
004D8C92  8B 86 3F 4E 7F 00         MOV EAX,dword ptr [ESI + 0x7f4e3f]
004D8C98  52                        PUSH EDX
004D8C99  50                        PUSH EAX
004D8C9A  E8 E4 91 F2 FF            CALL 0x00401e83
LAB_004d8c9f:
004D8C9F  5E                        POP ESI
004D8CA0  5F                        POP EDI
004D8CA1  33 C0                     XOR EAX,EAX
004D8CA3  5B                        POP EBX
004D8CA4  8B E5                     MOV ESP,EBP
004D8CA6  5D                        POP EBP
004D8CA7  C2 04 00                  RET 0x4
