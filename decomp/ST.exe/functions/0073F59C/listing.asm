FUN_0073f59c:
0073F59C  52                        PUSH EDX
0073F59D  83 EC 30                  SUB ESP,0x30
0073F5A0  DB 7C 24 18               FSTP extended double ptr [ESP + 0x18]
0073F5A4  DB 3C 24                  FSTP extended double ptr [ESP]
0073F5A7  33 D2                     XOR EDX,EDX
0073F5A9  8B 44 24 06               MOV EAX,dword ptr [ESP + 0x6]
0073F5AD  A9 00 00 FF 7F            TEST EAX,0x7fff0000
0073F5B2  74 0A                     JZ 0x0073f5be
0073F5B4  E8 DD FD FF FF            CALL 0x0073f396
0073F5B9  83 C4 30                  ADD ESP,0x30
0073F5BC  5A                        POP EDX
0073F5BD  C3                        RET
LAB_0073f5be:
0073F5BE  DB 2C 24                  FLD extended double ptr [ESP]
0073F5C1  DB 6C 24 18               FLD extended double ptr [ESP + 0x18]
0073F5C5  8B 04 24                  MOV EAX,dword ptr [ESP]
0073F5C8  0B 44 24 04               OR EAX,dword ptr [ESP + 0x4]
0073F5CC  74 79                     JZ 0x0073f647
0073F5CE  D9 C9                     FXCH
0073F5D0  DB 7C 24 0C               FSTP extended double ptr [ESP + 0xc]
0073F5D4  DB 2C 24                  FLD extended double ptr [ESP]
0073F5D7  D9 C9                     FXCH
0073F5D9  83 CA 02                  OR EDX,0x2
0073F5DC  D9 7C 24 24               FNSTCW word ptr [ESP + 0x24]
0073F5E0  8B 44 24 24               MOV EAX,dword ptr [ESP + 0x24]
0073F5E4  0D 3F 03 00 00            OR EAX,0x33f
0073F5E9  89 44 24 28               MOV dword ptr [ESP + 0x28],EAX
0073F5ED  D9 6C 24 28               FLDCW word ptr [ESP + 0x28]
0073F5F1  8B 44 24 20               MOV EAX,dword ptr [ESP + 0x20]
0073F5F5  25 FF 7F 00 00            AND EAX,0x7fff
0073F5FA  3D BE 7F 00 00            CMP EAX,0x7fbe
0073F5FF  77 18                     JA 0x0073f619
0073F601  83 CA 01                  OR EDX,0x1
0073F604  DC 0D 74 23 7F 00         FMUL double ptr [0x007f2374]
0073F60A  DB 7C 24 18               FSTP extended double ptr [ESP + 0x18]
0073F60E  DC 0D 74 23 7F 00         FMUL double ptr [0x007f2374]
0073F614  DB 3C 24                  FSTP extended double ptr [ESP]
0073F617  EB 20                     JMP 0x0073f639
LAB_0073f619:
0073F619  D9 7C 24 24               FNSTCW word ptr [ESP + 0x24]
0073F61D  8B 44 24 24               MOV EAX,dword ptr [ESP + 0x24]
0073F621  0D 00 03 00 00            OR EAX,0x300
0073F626  89 44 24 28               MOV dword ptr [ESP + 0x28],EAX
0073F62A  D9 6C 24 28               FLDCW word ptr [ESP + 0x28]
0073F62E  DD D8                     FSTP ST0
0073F630  DC 0D 74 23 7F 00         FMUL double ptr [0x007f2374]
0073F636  DB 3C 24                  FSTP extended double ptr [ESP]
LAB_0073f639:
0073F639  D9 6C 24 24               FLDCW word ptr [ESP + 0x24]
0073F63D  E8 54 FD FF FF            CALL 0x0073f396
0073F642  83 C4 30                  ADD ESP,0x30
0073F645  5A                        POP EDX
0073F646  C3                        RET
LAB_0073f647:
0073F647  D9 F8                     FPREM
0073F649  83 C4 30                  ADD ESP,0x30
0073F64C  5A                        POP EDX
0073F64D  C3                        RET
