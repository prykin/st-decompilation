FUN_006b3af0:
006B3AF0  55                        PUSH EBP
006B3AF1  8B EC                     MOV EBP,ESP
006B3AF3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3AF6  57                        PUSH EDI
006B3AF7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B3AFA  3B 87 A0 01 00 00         CMP EAX,dword ptr [EDI + 0x1a0]
006B3B00  0F 83 9F 00 00 00         JNC 0x006b3ba5
006B3B06  8B 8F B0 01 00 00         MOV ECX,dword ptr [EDI + 0x1b0]
006B3B0C  56                        PUSH ESI
006B3B0D  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
006B3B10  F7 06 00 00 08 00         TEST dword ptr [ESI],0x80000
006B3B16  74 0F                     JZ 0x006b3b27
006B3B18  8B 17                     MOV EDX,dword ptr [EDI]
006B3B1A  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B3B20  52                        PUSH EDX
006B3B21  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b3b27:
006B3B27  8B 06                     MOV EAX,dword ptr [ESI]
006B3B29  A8 30                     TEST AL,0x30
006B3B2B  74 5F                     JZ 0x006b3b8c
006B3B2D  F6 C4 80                  TEST AH,0x80
006B3B30  74 5A                     JZ 0x006b3b8c
006B3B32  C7 87 B4 01 00 00 01 00 00 00  MOV dword ptr [EDI + 0x1b4],0x1
006B3B3C  8B 16                     MOV EDX,dword ptr [ESI]
006B3B3E  83 E2 CD                  AND EDX,0xffffffcd
006B3B41  8B C2                     MOV EAX,EDX
006B3B43  89 16                     MOV dword ptr [ESI],EDX
006B3B45  A8 01                     TEST AL,0x1
006B3B47  74 04                     JZ 0x006b3b4d
006B3B49  0C 04                     OR AL,0x4
006B3B4B  89 06                     MOV dword ptr [ESI],EAX
LAB_006b3b4d:
006B3B4D  F7 06 00 00 00 04         TEST dword ptr [ESI],0x4000000
006B3B53  74 37                     JZ 0x006b3b8c
006B3B55  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B3B5B  85 C0                     TEST EAX,EAX
006B3B5D  74 2D                     JZ 0x006b3b8c
006B3B5F  53                        PUSH EBX
006B3B60  8B 9E C0 00 00 00         MOV EBX,dword ptr [ESI + 0xc0]
006B3B66  33 FF                     XOR EDI,EDI
006B3B68  85 DB                     TEST EBX,EBX
006B3B6A  7E 1C                     JLE 0x006b3b88
LAB_006b3b6c:
006B3B6C  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B3B72  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006B3B75  85 C0                     TEST EAX,EAX
006B3B77  7C 0A                     JL 0x006b3b83
006B3B79  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B3B7C  50                        PUSH EAX
006B3B7D  51                        PUSH ECX
006B3B7E  E8 6D FF FF FF            CALL 0x006b3af0
LAB_006b3b83:
006B3B83  47                        INC EDI
006B3B84  3B FB                     CMP EDI,EBX
006B3B86  7C E4                     JL 0x006b3b6c
LAB_006b3b88:
006B3B88  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B3B8B  5B                        POP EBX
LAB_006b3b8c:
006B3B8C  8B 06                     MOV EAX,dword ptr [ESI]
006B3B8E  5E                        POP ESI
006B3B8F  A9 00 00 08 00            TEST EAX,0x80000
006B3B94  74 0F                     JZ 0x006b3ba5
006B3B96  8B 17                     MOV EDX,dword ptr [EDI]
006B3B98  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B3B9E  52                        PUSH EDX
006B3B9F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b3ba5:
006B3BA5  5F                        POP EDI
006B3BA6  5D                        POP EBP
006B3BA7  C2 08 00                  RET 0x8
