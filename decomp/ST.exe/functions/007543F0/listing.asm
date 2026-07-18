FUN_007543f0:
007543F0  55                        PUSH EBP
007543F1  8B EC                     MOV EBP,ESP
007543F3  53                        PUSH EBX
007543F4  56                        PUSH ESI
007543F5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007543F8  57                        PUSH EDI
007543F9  83 CB FF                  OR EBX,0xffffffff
007543FC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007543FF  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
00754402  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
LAB_00754405:
00754405  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00754408  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0075440B  51                        PUSH ECX
0075440C  8B 54 C8 40               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x40]
00754410  52                        PUSH EDX
00754411  56                        PUSH ESI
00754412  E8 69 F7 FF FF            CALL 0x00753b80
00754417  8B F8                     MOV EDI,EAX
00754419  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075441C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0075441F  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
00754423  52                        PUSH EDX
00754424  56                        PUSH ESI
00754425  E8 A6 1D 00 00            CALL 0x007561d0
0075442A  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075442D  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00754430  8B 44 C8 44               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x44]
00754434  3B C3                     CMP EAX,EBX
00754436  75 05                     JNZ 0x0075443d
00754438  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0075443B  EB 04                     JMP 0x00754441
LAB_0075443d:
0075443D  8B 44 38 10               MOV EAX,dword ptr [EAX + EDI*0x1 + 0x10]
LAB_00754441:
00754441  3B C3                     CMP EAX,EBX
00754443  74 2D                     JZ 0x00754472
LAB_00754445:
00754445  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00754448  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0075444B  42                        INC EDX
0075444C  89 51 1C                  MOV dword ptr [ECX + 0x1c],EDX
0075444F  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00754452  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
00754455  51                        PUSH ECX
00754456  50                        PUSH EAX
00754457  56                        PUSH ESI
00754458  E8 23 F7 FF FF            CALL 0x00753b80
0075445D  8B F8                     MOV EDI,EAX
0075445F  0F BF 57 08               MOVSX EDX,word ptr [EDI + 0x8]
00754463  52                        PUSH EDX
00754464  56                        PUSH ESI
00754465  E8 16 F8 FF FF            CALL 0x00753c80
0075446A  8B 44 38 10               MOV EAX,dword ptr [EAX + EDI*0x1 + 0x10]
0075446E  3B C3                     CMP EAX,EBX
00754470  75 D3                     JNZ 0x00754445
LAB_00754472:
00754472  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00754475  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00754478  8D 4A 1C                  LEA ECX,[EDX + 0x1c]
0075447B  39 5C C2 44               CMP dword ptr [EDX + EAX*0x8 + 0x44],EBX
0075447F  75 29                     JNZ 0x007544aa
LAB_00754481:
00754481  85 C0                     TEST EAX,EAX
00754483  74 50                     JZ 0x007544d5
00754485  48                        DEC EAX
00754486  89 01                     MOV dword ptr [ECX],EAX
00754488  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0075448B  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0075448E  8D 4A 1C                  LEA ECX,[EDX + 0x1c]
00754491  39 5C C2 44               CMP dword ptr [EDX + EAX*0x8 + 0x44],EBX
00754495  74 EA                     JZ 0x00754481
00754497  8B C2                     MOV EAX,EDX
00754499  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0075449C  51                        PUSH ECX
0075449D  8B 44 C8 40               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x40]
007544A1  50                        PUSH EAX
007544A2  56                        PUSH ESI
007544A3  E8 D8 F6 FF FF            CALL 0x00753b80
007544A8  8B F8                     MOV EDI,EAX
LAB_007544aa:
007544AA  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007544AD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007544B0  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
007544B4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007544B7  85 C9                     TEST ECX,ECX
007544B9  8D 7C 3A 10               LEA EDI,[EDX + EDI*0x1 + 0x10]
007544BD  74 2C                     JZ 0x007544eb
007544BF  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
007544C2  8D 57 08                  LEA EDX,[EDI + 0x8]
007544C5  50                        PUSH EAX
007544C6  52                        PUSH EDX
007544C7  FF D1                     CALL ECX
007544C9  83 C4 08                  ADD ESP,0x8
007544CC  85 C0                     TEST EAX,EAX
007544CE  74 1B                     JZ 0x007544eb
007544D0  E9 30 FF FF FF            JMP 0x00754405
LAB_007544d5:
007544D5  6A 00                     PUSH 0x0
007544D7  6A 00                     PUSH 0x0
007544D9  56                        PUSH ESI
007544DA  E8 41 CA FF FF            CALL 0x00750f20
007544DF  5F                        POP EDI
007544E0  5E                        POP ESI
007544E1  B8 FC FF FF FF            MOV EAX,0xfffffffc
007544E6  5B                        POP EBX
007544E7  5D                        POP EBP
007544E8  C2 0C 00                  RET 0xc
LAB_007544eb:
007544EB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007544EE  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007544F1  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
007544F4  85 DB                     TEST EBX,EBX
007544F6  89 01                     MOV dword ptr [ECX],EAX
007544F8  74 2B                     JZ 0x00754525
007544FA  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
007544FD  66 8B 46 34               MOV AX,word ptr [ESI + 0x34]
00754501  66 85 C0                  TEST AX,AX
00754504  74 05                     JZ 0x0075450b
00754506  0F BF C0                  MOVSX EAX,AX
00754509  EB 07                     JMP 0x00754512
LAB_0075450b:
0075450B  8D 57 08                  LEA EDX,[EDI + 0x8]
0075450E  52                        PUSH EDX
0075450F  FF 56 08                  CALL dword ptr [ESI + 0x8]
LAB_00754512:
00754512  8B C8                     MOV ECX,EAX
00754514  8D 77 08                  LEA ESI,[EDI + 0x8]
00754517  8B FB                     MOV EDI,EBX
00754519  C1 E9 02                  SHR ECX,0x2
0075451C  F3 A5                     MOVSD.REP ES:EDI,ESI
0075451E  8B C8                     MOV ECX,EAX
00754520  83 E1 03                  AND ECX,0x3
00754523  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00754525:
00754525  5F                        POP EDI
00754526  5E                        POP ESI
00754527  33 C0                     XOR EAX,EAX
00754529  5B                        POP EBX
0075452A  5D                        POP EBP
0075452B  C2 0C 00                  RET 0xc
