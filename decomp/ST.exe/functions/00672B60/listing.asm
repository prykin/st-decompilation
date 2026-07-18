FUN_00672b60:
00672B60  55                        PUSH EBP
00672B61  8B EC                     MOV EBP,ESP
00672B63  83 EC 5C                  SUB ESP,0x5c
00672B66  A1 58 19 81 00            MOV EAX,[0x00811958]
00672B6B  53                        PUSH EBX
00672B6C  56                        PUSH ESI
00672B6D  57                        PUSH EDI
00672B6E  33 FF                     XOR EDI,EDI
00672B70  3B C7                     CMP EAX,EDI
00672B72  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00672B75  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00672B78  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00672B7B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00672B7E  75 16                     JNZ 0x00672b96
00672B80  89 3D 40 75 85 00         MOV dword ptr [0x00857540],EDI
00672B86  89 3D 08 19 81 00         MOV dword ptr [0x00811908],EDI
00672B8C  C7 05 24 2D 7D 00 00 06 00 00  MOV dword ptr [0x007d2d24],0x600
LAB_00672b96:
00672B96  6A 30                     PUSH 0x30
00672B98  E8 73 80 03 00            CALL 0x006aac10
00672B9D  3B C7                     CMP EAX,EDI
00672B9F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00672BA2  75 0E                     JNZ 0x00672bb2
00672BA4  B8 FE FF FF FF            MOV EAX,0xfffffffe
00672BA9  5F                        POP EDI
00672BAA  5E                        POP ESI
00672BAB  5B                        POP EBX
00672BAC  8B E5                     MOV ESP,EBP
00672BAE  5D                        POP EBP
00672BAF  C2 08 00                  RET 0x8
LAB_00672bb2:
00672BB2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00672BB7  8D 55 A8                  LEA EDX,[EBP + -0x58]
00672BBA  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00672BBD  57                        PUSH EDI
00672BBE  52                        PUSH EDX
00672BBF  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00672BC2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00672BC8  E8 23 AC 0B 00            CALL 0x0072d7f0
00672BCD  8B D8                     MOV EBX,EAX
00672BCF  83 C4 08                  ADD ESP,0x8
00672BD2  3B DF                     CMP EBX,EDI
00672BD4  0F 85 E4 01 00 00         JNZ 0x00672dbe
00672BDA  39 3D 5C 75 85 00         CMP dword ptr [0x0085755c],EDI
00672BE0  75 10                     JNZ 0x00672bf2
00672BE2  68 01 04 00 00            PUSH 0x401
00672BE7  E8 84 80 03 00            CALL 0x006aac70
00672BEC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00672BEF  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_00672bf2:
00672BF2  39 3D 28 75 85 00         CMP dword ptr [0x00857528],EDI
00672BF8  75 10                     JNZ 0x00672c0a
00672BFA  68 01 04 00 00            PUSH 0x401
00672BFF  E8 6C 80 03 00            CALL 0x006aac70
00672C04  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00672C07  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_00672c0a:
00672C0A  39 3D 48 19 81 00         CMP dword ptr [0x00811948],EDI
00672C10  75 10                     JNZ 0x00672c22
00672C12  68 01 04 00 00            PUSH 0x401
00672C17  E8 54 80 03 00            CALL 0x006aac70
00672C1C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00672C1F  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_00672c22:
00672C22  A1 3C 75 85 00            MOV EAX,[0x0085753c]
00672C27  3B C7                     CMP EAX,EDI
00672C29  75 12                     JNZ 0x00672c3d
00672C2B  68 05 01 00 00            PUSH 0x105
00672C30  E8 3B 80 03 00            CALL 0x006aac70
00672C35  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00672C38  C6 00 00                  MOV byte ptr [EAX],0x0
00672C3B  EB 03                     JMP 0x00672c40
LAB_00672c3d:
00672C3D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00672c40:
00672C40  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00672C43  A1 60 75 85 00            MOV EAX,[0x00857560]
00672C48  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
00672C4B  8B 0D 4C 19 81 00         MOV ECX,dword ptr [0x0081194c]
00672C51  89 4B 08                  MOV dword ptr [EBX + 0x8],ECX
00672C54  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
00672C5A  52                        PUSH EDX
00672C5B  E8 50 1D 05 00            CALL 0x006c49b0
00672C60  89 43 18                  MOV dword ptr [EBX + 0x18],EAX
00672C63  A1 48 19 81 00            MOV EAX,[0x00811948]
00672C68  50                        PUSH EAX
00672C69  E8 42 1D 05 00            CALL 0x006c49b0
00672C6E  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
00672C71  8B 0D 3C 75 85 00         MOV ECX,dword ptr [0x0085753c]
00672C77  51                        PUSH ECX
00672C78  E8 33 1D 05 00            CALL 0x006c49b0
00672C7D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00672C80  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00672C83  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00672C86  3B F7                     CMP ESI,EDI
00672C88  A3 4C 19 81 00            MOV [0x0081194c],EAX
00672C8D  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00672C90  74 46                     JZ 0x00672cd8
00672C92  56                        PUSH ESI
00672C93  FF 10                     CALL dword ptr [EAX]
00672C95  3B C7                     CMP EAX,EDI
00672C97  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00672C9A  75 1A                     JNZ 0x00672cb6
00672C9C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00672CA2  68 E7 00 00 00            PUSH 0xe7
00672CA7  68 2C 2D 7D 00            PUSH 0x7d2d2c
00672CAC  52                        PUSH EDX
00672CAD  6A F6                     PUSH -0xa
00672CAF  E8 8C 31 03 00            CALL 0x006a5e40
00672CB4  EB 22                     JMP 0x00672cd8
LAB_00672cb6:
00672CB6  8B FE                     MOV EDI,ESI
00672CB8  83 C9 FF                  OR ECX,0xffffffff
00672CBB  33 C0                     XOR EAX,EAX
00672CBD  F2 AE                     SCASB.REPNE ES:EDI
00672CBF  F7 D1                     NOT ECX
00672CC1  2B F9                     SUB EDI,ECX
00672CC3  8B C1                     MOV EAX,ECX
00672CC5  8B F7                     MOV ESI,EDI
00672CC7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00672CCA  C1 E9 02                  SHR ECX,0x2
00672CCD  F3 A5                     MOVSD.REP ES:EDI,ESI
00672CCF  8B C8                     MOV ECX,EAX
00672CD1  83 E1 03                  AND ECX,0x3
00672CD4  F3 A4                     MOVSB.REP ES:EDI,ESI
00672CD6  33 FF                     XOR EDI,EDI
LAB_00672cd8:
00672CD8  39 3D 5C 75 85 00         CMP dword ptr [0x0085755c],EDI
00672CDE  75 09                     JNZ 0x00672ce9
00672CE0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00672CE3  89 0D 5C 75 85 00         MOV dword ptr [0x0085755c],ECX
LAB_00672ce9:
00672CE9  39 3D 28 75 85 00         CMP dword ptr [0x00857528],EDI
00672CEF  75 09                     JNZ 0x00672cfa
00672CF1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00672CF4  89 15 28 75 85 00         MOV dword ptr [0x00857528],EDX
LAB_00672cfa:
00672CFA  39 3D 48 19 81 00         CMP dword ptr [0x00811948],EDI
00672D00  75 08                     JNZ 0x00672d0a
00672D02  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00672D05  A3 48 19 81 00            MOV [0x00811948],EAX
LAB_00672d0a:
00672D0A  39 3D 3C 75 85 00         CMP dword ptr [0x0085753c],EDI
00672D10  75 09                     JNZ 0x00672d1b
00672D12  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00672D15  89 0D 3C 75 85 00         MOV dword ptr [0x0085753c],ECX
LAB_00672d1b:
00672D1B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00672D1E  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00672D21  8B 0D 48 75 85 00         MOV ECX,dword ptr [0x00857548]
00672D27  89 15 60 75 85 00         MOV dword ptr [0x00857560],EDX
00672D2D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00672D32  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
00672D35  8B 15 4C 75 85 00         MOV EDX,dword ptr [0x0085754c]
00672D3B  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
00672D3E  A1 54 75 85 00            MOV EAX,[0x00857554]
00672D43  89 43 20                  MOV dword ptr [EBX + 0x20],EAX
00672D46  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
00672D4C  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
00672D4F  8B 15 18 2D 7D 00         MOV EDX,dword ptr [0x007d2d18]
00672D55  89 53 10                  MOV dword ptr [EBX + 0x10],EDX
00672D58  A1 54 19 81 00            MOV EAX,[0x00811954]
00672D5D  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
00672D60  89 3B                     MOV dword ptr [EBX],EDI
00672D62  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
00672D68  8B 15 18 2D 7D 00         MOV EDX,dword ptr [0x007d2d18]
00672D6E  A1 58 19 81 00            MOV EAX,[0x00811958]
00672D73  80 E1 6D                  AND CL,0x6d
00672D76  83 C9 01                  OR ECX,0x1
00672D79  C7 05 14 19 81 00 01 00 00 00  MOV dword ptr [0x00811914],0x1
00672D83  89 3D 58 75 85 00         MOV dword ptr [0x00857558],EDI
00672D89  89 3D 54 75 85 00         MOV dword ptr [0x00857554],EDI
00672D8F  89 3D 0C 19 81 00         MOV dword ptr [0x0081190c],EDI
00672D95  89 0D 24 2D 7D 00         MOV dword ptr [0x007d2d24],ECX
00672D9B  89 15 54 19 81 00         MOV dword ptr [0x00811954],EDX
00672DA1  C7 05 18 2D 7D 00 4E 08 00 00  MOV dword ptr [0x007d2d18],0x84e
00672DAB  89 03                     MOV dword ptr [EBX],EAX
00672DAD  89 1D 58 19 81 00         MOV dword ptr [0x00811958],EBX
00672DB3  33 C0                     XOR EAX,EAX
00672DB5  5F                        POP EDI
00672DB6  5E                        POP ESI
00672DB7  5B                        POP EBX
00672DB8  8B E5                     MOV ESP,EBP
00672DBA  5D                        POP EBP
00672DBB  C2 08 00                  RET 0x8
LAB_00672dbe:
00672DBE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00672DC1  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00672DC4  52                        PUSH EDX
00672DC5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00672DCB  E8 C0 30 03 00            CALL 0x006a5e90
00672DD0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00672DD3  50                        PUSH EAX
00672DD4  E8 B7 30 03 00            CALL 0x006a5e90
00672DD9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00672DDC  51                        PUSH ECX
00672DDD  E8 AE 30 03 00            CALL 0x006a5e90
00672DE2  39 3D 3C 75 85 00         CMP dword ptr [0x0085753c],EDI
00672DE8  75 09                     JNZ 0x00672df3
00672DEA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00672DED  52                        PUSH EDX
00672DEE  E8 9D 30 03 00            CALL 0x006a5e90
LAB_00672df3:
00672DF3  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00672DF6  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00672DF9  50                        PUSH EAX
00672DFA  E8 91 30 03 00            CALL 0x006a5e90
00672DFF  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
00672E02  51                        PUSH ECX
00672E03  E8 88 30 03 00            CALL 0x006a5e90
00672E08  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00672E0B  52                        PUSH EDX
00672E0C  E8 7F 30 03 00            CALL 0x006a5e90
00672E11  56                        PUSH ESI
00672E12  E8 79 30 03 00            CALL 0x006a5e90
00672E17  68 FD 00 00 00            PUSH 0xfd
00672E1C  68 2C 2D 7D 00            PUSH 0x7d2d2c
00672E21  57                        PUSH EDI
00672E22  53                        PUSH EBX
00672E23  E8 18 30 03 00            CALL 0x006a5e40
00672E28  5F                        POP EDI
00672E29  8B C3                     MOV EAX,EBX
00672E2B  5E                        POP ESI
00672E2C  5B                        POP EBX
00672E2D  8B E5                     MOV ESP,EBP
00672E2F  5D                        POP EBP
00672E30  C2 08 00                  RET 0x8
