MReportTy::PaintBut:
005C0B00  55                        PUSH EBP
005C0B01  8B EC                     MOV EBP,ESP
005C0B03  83 EC 60                  SUB ESP,0x60
005C0B06  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005C0B09  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
005C0B0C  53                        PUSH EBX
005C0B0D  56                        PUSH ESI
005C0B0E  66 83 7A 14 03            CMP word ptr [EDX + 0x14],0x3
005C0B13  8B F1                     MOV ESI,ECX
005C0B15  57                        PUSH EDI
005C0B16  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C0B19  8A C8                     MOV CL,AL
005C0B1B  75 0C                     JNZ 0x005c0b29
005C0B1D  F6 D9                     NEG CL
005C0B1F  1A C9                     SBB CL,CL
005C0B21  80 E1 ED                  AND CL,0xed
005C0B24  80 C1 2A                  ADD CL,0x2a
005C0B27  EB 0A                     JMP 0x005c0b33
LAB_005c0b29:
005C0B29  F6 D9                     NEG CL
005C0B2B  1A C9                     SBB CL,CL
005C0B2D  80 E1 EC                  AND CL,0xec
005C0B30  80 C1 2C                  ADD CL,0x2c
LAB_005c0b33:
005C0B33  8B 52 18                  MOV EDX,dword ptr [EDX + 0x18]
005C0B36  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
005C0B39  84 C0                     TEST AL,AL
005C0B3B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005C0B3E  74 05                     JZ 0x005c0b45
005C0B40  8B 46 7B                  MOV EAX,dword ptr [ESI + 0x7b]
005C0B43  EB 03                     JMP 0x005c0b48
LAB_005c0b45:
005C0B45  8B 46 77                  MOV EAX,dword ptr [ESI + 0x77]
LAB_005c0b48:
005C0B48  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C0B4B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005C0B4E  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005C0B51  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005C0B54  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C0B59  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C0B5C  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005C0B5F  8D 4D A0                  LEA ECX,[EBP + -0x60]
005C0B62  6A 00                     PUSH 0x0
005C0B64  52                        PUSH EDX
005C0B65  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
005C0B68  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C0B6E  E8 7D CC 16 00            CALL 0x0072d7f0
005C0B73  8B F0                     MOV ESI,EAX
005C0B75  83 C4 08                  ADD ESP,0x8
005C0B78  85 F6                     TEST ESI,ESI
005C0B7A  0F 85 92 01 00 00         JNZ 0x005c0d12
005C0B80  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005C0B83  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
005C0B86  85 DB                     TEST EBX,EBX
005C0B88  75 18                     JNZ 0x005c0ba2
005C0B8A  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
005C0B8E  0F AF 5E 04               IMUL EBX,dword ptr [ESI + 0x4]
005C0B92  83 C3 1F                  ADD EBX,0x1f
005C0B95  C1 EB 03                  SHR EBX,0x3
005C0B98  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005C0B9E  0F AF 5E 08               IMUL EBX,dword ptr [ESI + 0x8]
LAB_005c0ba2:
005C0BA2  56                        PUSH ESI
005C0BA3  E8 F8 43 0F 00            CALL 0x006b4fa0
005C0BA8  8B CB                     MOV ECX,EBX
005C0BAA  8B F8                     MOV EDI,EAX
005C0BAC  8B D1                     MOV EDX,ECX
005C0BAE  83 C8 FF                  OR EAX,0xffffffff
005C0BB1  C1 E9 02                  SHR ECX,0x2
005C0BB4  F3 AB                     STOSD.REP ES:EDI
005C0BB6  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
005C0BB9  8B CA                     MOV ECX,EDX
005C0BBB  83 E1 03                  AND ECX,0x3
005C0BBE  6A 4C                     PUSH 0x4c
005C0BC0  F3 AA                     STOSB.REP ES:EDI
005C0BC2  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
005C0BC5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C0BC8  53                        PUSH EBX
005C0BC9  57                        PUSH EDI
005C0BCA  50                        PUSH EAX
005C0BCB  6A 00                     PUSH 0x0
005C0BCD  6A 00                     PUSH 0x0
005C0BCF  6A 00                     PUSH 0x0
005C0BD1  56                        PUSH ESI
005C0BD2  E8 39 6A 10 00            CALL 0x006c7610
005C0BD7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005C0BDA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C0BDD  51                        PUSH ECX
005C0BDE  8D 57 FC                  LEA EDX,[EDI + -0x4]
005C0BE1  53                        PUSH EBX
005C0BE2  83 C0 FC                  ADD EAX,-0x4
005C0BE5  52                        PUSH EDX
005C0BE6  50                        PUSH EAX
005C0BE7  6A 02                     PUSH 0x2
005C0BE9  6A 02                     PUSH 0x2
005C0BEB  6A 00                     PUSH 0x0
005C0BED  56                        PUSH ESI
005C0BEE  E8 7D 69 10 00            CALL 0x006c7570
005C0BF3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005C0BF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005C0BF9  51                        PUSH ECX
005C0BFA  53                        PUSH EBX
005C0BFB  57                        PUSH EDI
005C0BFC  52                        PUSH EDX
005C0BFD  6A 00                     PUSH 0x0
005C0BFF  6A 00                     PUSH 0x0
005C0C01  6A 00                     PUSH 0x0
005C0C03  56                        PUSH ESI
005C0C04  E8 67 69 10 00            CALL 0x006c7570
005C0C09  8A 5D 14                  MOV BL,byte ptr [EBP + 0x14]
005C0C0C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005C0C0F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005C0C12  84 DB                     TEST BL,BL
005C0C14  75 04                     JNZ 0x005c0c1a
005C0C16  85 C9                     TEST ECX,ECX
005C0C18  75 08                     JNZ 0x005c0c22
LAB_005c0c1a:
005C0C1A  84 DB                     TEST BL,BL
005C0C1C  74 76                     JZ 0x005c0c94
005C0C1E  85 C0                     TEST EAX,EAX
005C0C20  74 72                     JZ 0x005c0c94
LAB_005c0c22:
005C0C22  84 DB                     TEST BL,BL
005C0C24  75 0C                     JNZ 0x005c0c32
005C0C26  A1 18 76 80 00            MOV EAX,[0x00807618]
005C0C2B  50                        PUSH EAX
005C0C2C  51                        PUSH ECX
005C0C2D  E8 0E F5 0E 00            CALL 0x006b0140
LAB_005c0c32:
005C0C32  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C0C35  6A 00                     PUSH 0x0
005C0C37  6A 00                     PUSH 0x0
005C0C39  6A 00                     PUSH 0x0
005C0C3B  8B 89 83 00 00 00         MOV ECX,dword ptr [ECX + 0x83]
005C0C41  6A 00                     PUSH 0x0
005C0C43  6A 00                     PUSH 0x0
005C0C45  56                        PUSH ESI
005C0C46  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005C0C49  E8 42 FE 14 00            CALL 0x00710a90
005C0C4E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005C0C51  33 C0                     XOR EAX,EAX
005C0C53  66 8B 42 14               MOV AX,word ptr [EDX + 0x14]
005C0C57  48                        DEC EAX
005C0C58  74 19                     JZ 0x005c0c73
005C0C5A  48                        DEC EAX
005C0C5B  74 16                     JZ 0x005c0c73
005C0C5D  48                        DEC EAX
005C0C5E  74 07                     JZ 0x005c0c67
005C0C60  BB 04 00 00 00            MOV EBX,0x4
005C0C65  EB 16                     JMP 0x005c0c7d
LAB_005c0c67:
005C0C67  F6 DB                     NEG BL
005C0C69  1B DB                     SBB EBX,EBX
005C0C6B  83 E3 FE                  AND EBX,0xfffffffe
005C0C6E  83 C3 03                  ADD EBX,0x3
005C0C71  EB 0A                     JMP 0x005c0c7d
LAB_005c0c73:
005C0C73  F6 DB                     NEG BL
005C0C75  1B DB                     SBB EBX,EBX
005C0C77  83 E3 FE                  AND EBX,0xfffffffe
005C0C7A  83 C3 02                  ADD EBX,0x2
LAB_005c0c7d:
005C0C7D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C0C80  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005C0C83  53                        PUSH EBX
005C0C84  6A FF                     PUSH -0x1
005C0C86  8B 89 83 00 00 00         MOV ECX,dword ptr [ECX + 0x83]
005C0C8C  6A FF                     PUSH -0x1
005C0C8E  50                        PUSH EAX
005C0C8F  E8 2C 0D 15 00            CALL 0x007119c0
LAB_005c0c94:
005C0C94  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005C0C97  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005C0C9A  57                        PUSH EDI
005C0C9B  52                        PUSH EDX
005C0C9C  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
005C0C9F  8B 0B                     MOV ECX,dword ptr [EBX]
005C0CA1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C0CA7  50                        PUSH EAX
005C0CA8  51                        PUSH ECX
005C0CA9  52                        PUSH EDX
005C0CAA  E8 D1 52 0F 00            CALL 0x006b5f80
005C0CAF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005C0CB2  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
005C0CB5  8B 0B                     MOV ECX,dword ptr [EBX]
005C0CB7  8B 52 5D                  MOV EDX,dword ptr [EDX + 0x5d]
005C0CBA  52                        PUSH EDX
005C0CBB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005C0CBE  6A 01                     PUSH 0x1
005C0CC0  57                        PUSH EDI
005C0CC1  52                        PUSH EDX
005C0CC2  50                        PUSH EAX
005C0CC3  51                        PUSH ECX
005C0CC4  50                        PUSH EAX
005C0CC5  51                        PUSH ECX
005C0CC6  E8 CD 15 E4 FF            CALL 0x00402298
005C0CCB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C0CCE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005C0CD1  83 C4 20                  ADD ESP,0x20
005C0CD4  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
005C0CD7  05 A3 00 00 00            ADD EAX,0xa3
005C0CDC  68 FF 00 00 01            PUSH 0x10000ff
005C0CE1  68 4C 00 00 01            PUSH 0x100004c
005C0CE6  50                        PUSH EAX
005C0CE7  8B 03                     MOV EAX,dword ptr [EBX]
005C0CE9  57                        PUSH EDI
005C0CEA  51                        PUSH ECX
005C0CEB  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005C0CF1  6A 00                     PUSH 0x0
005C0CF3  6A 00                     PUSH 0x0
005C0CF5  6A 00                     PUSH 0x0
005C0CF7  56                        PUSH ESI
005C0CF8  52                        PUSH EDX
005C0CF9  50                        PUSH EAX
005C0CFA  51                        PUSH ECX
005C0CFB  E8 E0 3B 0F 00            CALL 0x006b48e0
005C0D00  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
005C0D03  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C0D09  5F                        POP EDI
005C0D0A  5E                        POP ESI
005C0D0B  5B                        POP EBX
005C0D0C  8B E5                     MOV ESP,EBP
005C0D0E  5D                        POP EBP
005C0D0F  C2 14 00                  RET 0x14
LAB_005c0d12:
005C0D12  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
005C0D15  68 44 D0 7C 00            PUSH 0x7cd044
005C0D1A  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C0D1F  56                        PUSH ESI
005C0D20  6A 00                     PUSH 0x0
005C0D22  68 C1 02 00 00            PUSH 0x2c1
005C0D27  68 C8 CE 7C 00            PUSH 0x7ccec8
005C0D2C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C0D31  E8 9A C7 0E 00            CALL 0x006ad4d0
005C0D36  83 C4 18                  ADD ESP,0x18
005C0D39  85 C0                     TEST EAX,EAX
005C0D3B  74 01                     JZ 0x005c0d3e
005C0D3D  CC                        INT3
LAB_005c0d3e:
005C0D3E  68 C1 02 00 00            PUSH 0x2c1
005C0D43  68 C8 CE 7C 00            PUSH 0x7ccec8
005C0D48  6A 00                     PUSH 0x0
005C0D4A  56                        PUSH ESI
005C0D4B  E8 F0 50 0E 00            CALL 0x006a5e40
005C0D50  5F                        POP EDI
005C0D51  5E                        POP ESI
005C0D52  5B                        POP EBX
005C0D53  8B E5                     MOV ESP,EBP
005C0D55  5D                        POP EBP
005C0D56  C2 14 00                  RET 0x14
