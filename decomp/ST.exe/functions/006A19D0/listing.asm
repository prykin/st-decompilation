FUN_006a19d0:
006A19D0  55                        PUSH EBP
006A19D1  8B EC                     MOV EBP,ESP
006A19D3  83 EC 10                  SUB ESP,0x10
006A19D6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A19D9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A19DC  53                        PUSH EBX
006A19DD  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A19E0  56                        PUSH ESI
006A19E1  8D 45 F0                  LEA EAX,[EBP + -0x10]
006A19E4  57                        PUSH EDI
006A19E5  50                        PUSH EAX
006A19E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A19E9  53                        PUSH EBX
006A19EA  51                        PUSH ECX
006A19EB  52                        PUSH EDX
006A19EC  50                        PUSH EAX
006A19ED  E8 5A 27 D6 FF            CALL 0x0040414c
006A19F2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006A19F5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006A19F8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A19FB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A19FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A1A01  56                        PUSH ESI
006A1A02  57                        PUSH EDI
006A1A03  53                        PUSH EBX
006A1A04  51                        PUSH ECX
006A1A05  52                        PUSH EDX
006A1A06  50                        PUSH EAX
006A1A07  E8 48 29 D6 FF            CALL 0x00404354
006A1A0C  83 C4 2C                  ADD ESP,0x2c
006A1A0F  66 3D FF FF               CMP AX,0xffff
006A1A13  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A1A16  75 09                     JNZ 0x006a1a21
006A1A18  5F                        POP EDI
006A1A19  5E                        POP ESI
006A1A1A  33 C0                     XOR EAX,EAX
006A1A1C  5B                        POP EBX
006A1A1D  8B E5                     MOV ESP,EBP
006A1A1F  5D                        POP EBP
006A1A20  C3                        RET
LAB_006a1a21:
006A1A21  66 85 C0                  TEST AX,AX
006A1A24  0F 84 15 01 00 00         JZ 0x006a1b3f
006A1A2A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A1A2D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A1A30  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A1A33  56                        PUSH ESI
006A1A34  57                        PUSH EDI
006A1A35  53                        PUSH EBX
006A1A36  51                        PUSH ECX
006A1A37  52                        PUSH EDX
006A1A38  50                        PUSH EAX
006A1A39  E8 F2 15 D6 FF            CALL 0x00403030
006A1A3E  83 C4 18                  ADD ESP,0x18
006A1A41  85 C0                     TEST EAX,EAX
006A1A43  0F 85 F6 00 00 00         JNZ 0x006a1b3f
006A1A49  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A1A4C  51                        PUSH ECX
006A1A4D  E8 19 17 D6 FF            CALL 0x0040316b
006A1A52  8B D8                     MOV EBX,EAX
006A1A54  83 C4 04                  ADD ESP,0x4
006A1A57  66 83 FB FF               CMP BX,-0x1
006A1A5B  7F 09                     JG 0x006a1a66
006A1A5D  5F                        POP EDI
006A1A5E  5E                        POP ESI
006A1A5F  33 C0                     XOR EAX,EAX
006A1A61  5B                        POP EBX
006A1A62  8B E5                     MOV ESP,EBP
006A1A64  5D                        POP EBP
006A1A65  C3                        RET
LAB_006a1a66:
006A1A66  8B 16                     MOV EDX,dword ptr [ESI]
006A1A68  66 8B 46 04               MOV AX,word ptr [ESI + 0x4]
006A1A6C  81 FF FF 00 00 00         CMP EDI,0xff
006A1A72  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006A1A75  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
006A1A79  74 6D                     JZ 0x006a1ae8
006A1A7B  83 FF 01                  CMP EDI,0x1
006A1A7E  75 34                     JNZ 0x006a1ab4
006A1A80  8A 4D FA                  MOV CL,byte ptr [EBP + -0x6]
006A1A83  32 CB                     XOR CL,BL
006A1A85  83 E1 0F                  AND ECX,0xf
006A1A88  66 31 4D FA               XOR word ptr [EBP + -0x6],CX
006A1A8C  E8 2F CC 08 00            CALL 0x0072e6c0
006A1A91  0F BF D3                  MOVSX EDX,BX
006A1A94  8A 5D FA                  MOV BL,byte ptr [EBP + -0x6]
006A1A97  0F BF 0C 55 C8 F9 7D 00   MOVSX ECX,word ptr [EDX*0x2 + 0x7df9c8]
006A1A9F  99                        CDQ
006A1AA0  F7 F9                     IDIV ECX
006A1AA2  42                        INC EDX
006A1AA3  C1 E2 04                  SHL EDX,0x4
006A1AA6  32 D3                     XOR DL,BL
006A1AA8  81 E2 F0 00 00 00         AND EDX,0xf0
006A1AAE  66 31 55 FA               XOR word ptr [EBP + -0x6],DX
006A1AB2  EB 66                     JMP 0x006a1b1a
LAB_006a1ab4:
006A1AB4  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
006A1AB7  32 D3                     XOR DL,BL
006A1AB9  83 E2 0F                  AND EDX,0xf
006A1ABC  66 31 55 F8               XOR word ptr [EBP + -0x8],DX
006A1AC0  E8 FB CB 08 00            CALL 0x0072e6c0
006A1AC5  0F BF CB                  MOVSX ECX,BX
006A1AC8  99                        CDQ
006A1AC9  0F BF 0C 4D C8 F9 7D 00   MOVSX ECX,word ptr [ECX*0x2 + 0x7df9c8]
006A1AD1  F7 F9                     IDIV ECX
006A1AD3  8A 5D F8                  MOV BL,byte ptr [EBP + -0x8]
006A1AD6  42                        INC EDX
006A1AD7  C1 E2 04                  SHL EDX,0x4
006A1ADA  32 D3                     XOR DL,BL
006A1ADC  81 E2 F0 00 00 00         AND EDX,0xf0
006A1AE2  66 31 55 F8               XOR word ptr [EBP + -0x8],DX
006A1AE6  EB 32                     JMP 0x006a1b1a
LAB_006a1ae8:
006A1AE8  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
006A1AEB  32 D3                     XOR DL,BL
006A1AED  83 E2 0F                  AND EDX,0xf
006A1AF0  66 31 55 FC               XOR word ptr [EBP + -0x4],DX
006A1AF4  E8 C7 CB 08 00            CALL 0x0072e6c0
006A1AF9  0F BF CB                  MOVSX ECX,BX
006A1AFC  99                        CDQ
006A1AFD  0F BF 0C 4D A8 F9 7D 00   MOVSX ECX,word ptr [ECX*0x2 + 0x7df9a8]
006A1B05  F7 F9                     IDIV ECX
006A1B07  8A 5D FC                  MOV BL,byte ptr [EBP + -0x4]
006A1B0A  42                        INC EDX
006A1B0B  C1 E2 04                  SHL EDX,0x4
006A1B0E  32 D3                     XOR DL,BL
006A1B10  81 E2 F0 00 00 00         AND EDX,0xf0
006A1B16  66 31 55 FC               XOR word ptr [EBP + -0x4],DX
LAB_006a1b1a:
006A1B1A  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A1B1D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A1B20  52                        PUSH EDX
006A1B21  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A1B24  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A1B27  50                        PUSH EAX
006A1B28  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A1B2B  51                        PUSH ECX
006A1B2C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A1B2F  57                        PUSH EDI
006A1B30  52                        PUSH EDX
006A1B31  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A1B34  50                        PUSH EAX
006A1B35  51                        PUSH ECX
006A1B36  52                        PUSH EDX
006A1B37  E8 B9 31 D6 FF            CALL 0x00404cf5
006A1B3C  83 C4 20                  ADD ESP,0x20
LAB_006a1b3f:
006A1B3F  5F                        POP EDI
006A1B40  5E                        POP ESI
006A1B41  B8 01 00 00 00            MOV EAX,0x1
006A1B46  5B                        POP EBX
006A1B47  8B E5                     MOV ESP,EBP
006A1B49  5D                        POP EBP
006A1B4A  C3                        RET
