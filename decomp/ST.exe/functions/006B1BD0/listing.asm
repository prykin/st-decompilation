FUN_006b1bd0:
006B1BD0  55                        PUSH EBP
006B1BD1  8B EC                     MOV EBP,ESP
006B1BD3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B1BD6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B1BD9  53                        PUSH EBX
006B1BDA  56                        PUSH ESI
006B1BDB  8B B2 A0 01 00 00         MOV ESI,dword ptr [EDX + 0x1a0]
006B1BE1  57                        PUSH EDI
006B1BE2  3B CE                     CMP ECX,ESI
006B1BE4  B8 FD FF FF FF            MOV EAX,0xfffffffd
006B1BE9  0F 83 88 00 00 00         JNC 0x006b1c77
006B1BEF  8B B2 B0 01 00 00         MOV ESI,dword ptr [EDX + 0x1b0]
006B1BF5  8B 34 8E                  MOV ESI,dword ptr [ESI + ECX*0x4]
006B1BF8  8B 0E                     MOV ECX,dword ptr [ESI]
006B1BFA  8B F9                     MOV EDI,ECX
006B1BFC  81 E7 00 80 08 00         AND EDI,0x88000
006B1C02  81 FF 00 80 00 00         CMP EDI,0x8000
006B1C08  75 6D                     JNZ 0x006b1c77
006B1C0A  8B 7E 4C                  MOV EDI,dword ptr [ESI + 0x4c]
006B1C0D  3B F8                     CMP EDI,EAX
006B1C0F  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B1C12  74 12                     JZ 0x006b1c26
006B1C14  F6 C1 20                  TEST CL,0x20
006B1C17  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
006B1C1A  74 0A                     JZ 0x006b1c26
006B1C1C  C7 82 B4 01 00 00 01 00 00 00  MOV dword ptr [EDX + 0x1b4],0x1
LAB_006b1c26:
006B1C26  56                        PUSH ESI
006B1C27  52                        PUSH EDX
006B1C28  E8 E3 D1 01 00            CALL 0x006cee10
006B1C2D  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
006B1C30  8B 06                     MOV EAX,dword ptr [ESI]
006B1C32  A9 00 00 00 04            TEST EAX,0x4000000
006B1C37  74 3C                     JZ 0x006b1c75
006B1C39  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B1C3F  85 C0                     TEST EAX,EAX
006B1C41  74 32                     JZ 0x006b1c75
006B1C43  8B 9E C0 00 00 00         MOV EBX,dword ptr [ESI + 0xc0]
006B1C49  33 FF                     XOR EDI,EDI
006B1C4B  85 DB                     TEST EBX,EBX
006B1C4D  7E 1C                     JLE 0x006b1c6b
LAB_006b1c4f:
006B1C4F  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B1C55  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006B1C58  85 C0                     TEST EAX,EAX
006B1C5A  7C 0A                     JL 0x006b1c66
006B1C5C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B1C5F  50                        PUSH EAX
006B1C60  51                        PUSH ECX
006B1C61  E8 6A FF FF FF            CALL 0x006b1bd0
LAB_006b1c66:
006B1C66  47                        INC EDI
006B1C67  3B FB                     CMP EDI,EBX
006B1C69  7C E4                     JL 0x006b1c4f
LAB_006b1c6b:
006B1C6B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B1C6E  5F                        POP EDI
006B1C6F  5E                        POP ESI
006B1C70  5B                        POP EBX
006B1C71  5D                        POP EBP
006B1C72  C2 08 00                  RET 0x8
LAB_006b1c75:
006B1C75  8B C7                     MOV EAX,EDI
LAB_006b1c77:
006B1C77  5F                        POP EDI
006B1C78  5E                        POP ESI
006B1C79  5B                        POP EBX
006B1C7A  5D                        POP EBP
006B1C7B  C2 08 00                  RET 0x8
