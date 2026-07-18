FUN_00755bc0:
00755BC0  55                        PUSH EBP
00755BC1  8B EC                     MOV EBP,ESP
00755BC3  53                        PUSH EBX
00755BC4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00755BC7  56                        PUSH ESI
00755BC8  83 CE FF                  OR ESI,0xffffffff
00755BCB  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00755BCE  57                        PUSH EDI
00755BCF  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00755BD2  83 C9 10                  OR ECX,0x10
00755BD5  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00755BD8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00755BDB  3B CE                     CMP ECX,ESI
00755BDD  74 7A                     JZ 0x00755c59
00755BDF  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755BE2  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
LAB_00755be5:
00755BE5  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755BE8  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00755BEB  42                        INC EDX
00755BEC  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
00755BEF  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00755BF2  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00755BF5  50                        PUSH EAX
00755BF6  51                        PUSH ECX
00755BF7  53                        PUSH EBX
00755BF8  E8 83 DF FF FF            CALL 0x00753b80
00755BFD  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00755C00  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00755C03  89 74 D1 44               MOV dword ptr [ECX + EDX*0x8 + 0x44],ESI
00755C07  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00755C0A  3B CE                     CMP ECX,ESI
00755C0C  75 D7                     JNZ 0x00755be5
00755C0E  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00755C11  83 C0 10                  ADD EAX,0x10
00755C14  50                        PUSH EAX
00755C15  6A 01                     PUSH 0x1
00755C17  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00755C1A  53                        PUSH EBX
00755C1B  C7 44 D1 44 00 00 00 00   MOV dword ptr [ECX + EDX*0x8 + 0x44],0x0
00755C23  E8 08 19 00 00            CALL 0x00757530
00755C28  85 C0                     TEST EAX,EAX
00755C2A  75 0C                     JNZ 0x00755c38
00755C2C  5F                        POP EDI
00755C2D  5E                        POP ESI
00755C2E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00755C33  5B                        POP EBX
00755C34  5D                        POP EBP
00755C35  C2 08 00                  RET 0x8
LAB_00755c38:
00755C38  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755C3B  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
00755C3E  89 78 1C                  MOV dword ptr [EAX + 0x1c],EDI
00755C41  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00755C44  50                        PUSH EAX
00755C45  53                        PUSH EBX
00755C46  E8 55 01 00 00            CALL 0x00755da0
00755C4B  85 C0                     TEST EAX,EAX
00755C4D  0F 85 D7 00 00 00         JNZ 0x00755d2a
00755C53  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00755C56  89 71 1C                  MOV dword ptr [ECX + 0x1c],ESI
LAB_00755c59:
00755C59  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755C5C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755C5F  51                        PUSH ECX
00755C60  8B 54 C8 40               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x40]
00755C64  52                        PUSH EDX
00755C65  53                        PUSH EBX
00755C66  E8 15 DF FF FF            CALL 0x00753b80
00755C6B  8B F0                     MOV ESI,EAX
00755C6D  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755C70  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755C73  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
00755C77  52                        PUSH EDX
00755C78  56                        PUSH ESI
00755C79  53                        PUSH EBX
00755C7A  E8 C1 00 00 00            CALL 0x00755d40
00755C7F  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00755C82  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00755C85  85 C0                     TEST EAX,EAX
00755C87  75 06                     JNZ 0x00755c8f
00755C89  66 39 46 08               CMP word ptr [ESI + 0x8],AX
00755C8D  74 37                     JZ 0x00755cc6
LAB_00755c8f:
00755C8F  0F BF 56 08               MOVSX EDX,word ptr [ESI + 0x8]
00755C93  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
00755C96  0F BF 76 16               MOVSX ESI,word ptr [ESI + 0x16]
00755C9A  83 EE 10                  SUB ESI,0x10
00755C9D  D1 FE                     SAR ESI,0x1
00755C9F  3B D6                     CMP EDX,ESI
00755CA1  0F 8D 81 00 00 00         JGE 0x00755d28
00755CA7  85 C0                     TEST EAX,EAX
00755CA9  7E 7D                     JLE 0x00755d28
00755CAB  8B 44 C1 40               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x40]
00755CAF  50                        PUSH EAX
00755CB0  52                        PUSH EDX
00755CB1  53                        PUSH EBX
00755CB2  E8 59 01 00 00            CALL 0x00755e10
00755CB7  85 C0                     TEST EAX,EAX
00755CB9  7C 6F                     JL 0x00755d2a
00755CBB  7F 9C                     JG 0x00755c59
00755CBD  5F                        POP EDI
00755CBE  5E                        POP ESI
00755CBF  33 C0                     XOR EAX,EAX
00755CC1  5B                        POP EBX
00755CC2  5D                        POP EBP
00755CC3  C2 08 00                  RET 0x8
LAB_00755cc6:
00755CC6  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755CC9  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00755CCC  8B 78 24                  MOV EDI,dword ptr [EAX + 0x24]
00755CCF  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00755CD2  03 FA                     ADD EDI,EDX
00755CD4  83 7F 04 FF               CMP dword ptr [EDI + 0x4],-0x1
00755CD8  74 4E                     JZ 0x00755d28
00755CDA  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00755CDD  42                        INC EDX
00755CDE  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
00755CE1  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00755CE4  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
00755CE7  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00755CEA  50                        PUSH EAX
00755CEB  51                        PUSH ECX
00755CEC  53                        PUSH EBX
00755CED  E8 8E DE FF FF            CALL 0x00753b80
00755CF2  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00755CF5  8B F0                     MOV ESI,EAX
00755CF7  0F BF 4A 16               MOVSX ECX,word ptr [EDX + 0x16]
00755CFB  8B C1                     MOV EAX,ECX
00755CFD  C1 E9 02                  SHR ECX,0x2
00755D00  F3 A5                     MOVSD.REP ES:EDI,ESI
00755D02  8B C8                     MOV ECX,EAX
00755D04  83 E1 03                  AND ECX,0x3
00755D07  F3 A4                     MOVSB.REP ES:EDI,ESI
00755D09  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755D0C  66 FF 48 2A               DEC word ptr [EAX + 0x2a]
00755D10  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00755D13  51                        PUSH ECX
00755D14  53                        PUSH EBX
00755D15  E8 56 19 00 00            CALL 0x00757670
00755D1A  85 C0                     TEST EAX,EAX
00755D1C  75 0C                     JNZ 0x00755d2a
00755D1E  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00755D21  C7 42 14 01 00 00 00      MOV dword ptr [EDX + 0x14],0x1
LAB_00755d28:
00755D28  33 C0                     XOR EAX,EAX
LAB_00755d2a:
00755D2A  5F                        POP EDI
00755D2B  5E                        POP ESI
00755D2C  5B                        POP EBX
00755D2D  5D                        POP EBP
00755D2E  C2 08 00                  RET 0x8
