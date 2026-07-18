FUN_00571a30:
00571A30  55                        PUSH EBP
00571A31  8B EC                     MOV EBP,ESP
00571A33  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00571A36  56                        PUSH ESI
00571A37  84 C0                     TEST AL,AL
00571A39  57                        PUSH EDI
00571A3A  B9 10 00 00 00            MOV ECX,0x10
00571A3F  0F 84 E5 00 00 00         JZ 0x00571b2a
00571A45  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00571A48  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00571A4B  8D 70 10                  LEA ESI,[EAX + 0x10]
00571A4E  8D BA 99 02 00 00         LEA EDI,[EDX + 0x299]
00571A54  F3 A5                     MOVSD.REP ES:EDI,ESI
00571A56  8D 48 5D                  LEA ECX,[EAX + 0x5d]
00571A59  8D B2 E6 02 00 00         LEA ESI,[EDX + 0x2e6]
00571A5F  8B 39                     MOV EDI,dword ptr [ECX]
00571A61  89 3E                     MOV dword ptr [ESI],EDI
00571A63  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00571A66  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00571A69  8D BA AA 11 00 00         LEA EDI,[EDX + 0x11aa]
00571A6F  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00571A72  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
00571A75  B9 08 00 00 00            MOV ECX,0x8
00571A7A  8D 70 74                  LEA ESI,[EAX + 0x74]
00571A7D  F3 A5                     MOVSD.REP ES:EDI,ESI
00571A7F  8B 08                     MOV ECX,dword ptr [EAX]
00571A81  5F                        POP EDI
00571A82  89 0A                     MOV dword ptr [EDX],ECX
00571A84  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00571A87  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00571A8A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00571A8D  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00571A90  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
00571A94  66 89 4A 0C               MOV word ptr [EDX + 0xc],CX
00571A98  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00571A9C  66 89 4A 0E               MOV word ptr [EDX + 0xe],CX
00571AA0  8A 48 50                  MOV CL,byte ptr [EAX + 0x50]
00571AA3  88 8A D9 02 00 00         MOV byte ptr [EDX + 0x2d9],CL
00571AA9  8A 48 51                  MOV CL,byte ptr [EAX + 0x51]
00571AAC  88 8A DA 02 00 00         MOV byte ptr [EDX + 0x2da],CL
00571AB2  8A 48 52                  MOV CL,byte ptr [EAX + 0x52]
00571AB5  88 8A DB 02 00 00         MOV byte ptr [EDX + 0x2db],CL
00571ABB  8A 48 53                  MOV CL,byte ptr [EAX + 0x53]
00571ABE  88 8A DC 02 00 00         MOV byte ptr [EDX + 0x2dc],CL
00571AC4  8A 48 54                  MOV CL,byte ptr [EAX + 0x54]
00571AC7  88 8A DD 02 00 00         MOV byte ptr [EDX + 0x2dd],CL
00571ACD  8A 48 55                  MOV CL,byte ptr [EAX + 0x55]
00571AD0  88 8A DE 02 00 00         MOV byte ptr [EDX + 0x2de],CL
00571AD6  8A 48 56                  MOV CL,byte ptr [EAX + 0x56]
00571AD9  88 8A DF 02 00 00         MOV byte ptr [EDX + 0x2df],CL
00571ADF  8A 48 57                  MOV CL,byte ptr [EAX + 0x57]
00571AE2  88 8A E0 02 00 00         MOV byte ptr [EDX + 0x2e0],CL
00571AE8  8B 48 58                  MOV ECX,dword ptr [EAX + 0x58]
00571AEB  89 8A E1 02 00 00         MOV dword ptr [EDX + 0x2e1],ECX
00571AF1  8A 48 5C                  MOV CL,byte ptr [EAX + 0x5c]
00571AF4  88 8A E5 02 00 00         MOV byte ptr [EDX + 0x2e5],CL
00571AFA  8A 48 6A                  MOV CL,byte ptr [EAX + 0x6a]
00571AFD  88 8A F3 02 00 00         MOV byte ptr [EDX + 0x2f3],CL
00571B03  8A 48 6B                  MOV CL,byte ptr [EAX + 0x6b]
00571B06  88 8A F4 02 00 00         MOV byte ptr [EDX + 0x2f4],CL
00571B0C  8B 48 6C                  MOV ECX,dword ptr [EAX + 0x6c]
00571B0F  89 8A F5 02 00 00         MOV dword ptr [EDX + 0x2f5],ECX
00571B15  8A 48 69                  MOV CL,byte ptr [EAX + 0x69]
00571B18  88 8A F2 02 00 00         MOV byte ptr [EDX + 0x2f2],CL
00571B1E  8B 40 70                  MOV EAX,dword ptr [EAX + 0x70]
00571B21  89 82 A6 11 00 00         MOV dword ptr [EDX + 0x11a6],EAX
00571B27  5E                        POP ESI
00571B28  5D                        POP EBP
00571B29  C3                        RET
LAB_00571b2a:
00571B2A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00571B2D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00571B30  8D B0 99 02 00 00         LEA ESI,[EAX + 0x299]
00571B36  8D 7A 10                  LEA EDI,[EDX + 0x10]
00571B39  F3 A5                     MOVSD.REP ES:EDI,ESI
00571B3B  8D 88 E6 02 00 00         LEA ECX,[EAX + 0x2e6]
00571B41  8D 72 5D                  LEA ESI,[EDX + 0x5d]
00571B44  8B 39                     MOV EDI,dword ptr [ECX]
00571B46  89 3E                     MOV dword ptr [ESI],EDI
00571B48  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00571B4B  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00571B4E  8D 7A 74                  LEA EDI,[EDX + 0x74]
00571B51  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00571B54  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
00571B57  B9 08 00 00 00            MOV ECX,0x8
00571B5C  8D B0 AA 11 00 00         LEA ESI,[EAX + 0x11aa]
00571B62  F3 A5                     MOVSD.REP ES:EDI,ESI
00571B64  8B 08                     MOV ECX,dword ptr [EAX]
00571B66  5F                        POP EDI
00571B67  89 0A                     MOV dword ptr [EDX],ECX
00571B69  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00571B6C  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00571B6F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00571B72  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00571B75  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
00571B79  66 89 4A 0C               MOV word ptr [EDX + 0xc],CX
00571B7D  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00571B81  66 89 4A 0E               MOV word ptr [EDX + 0xe],CX
00571B85  8A 88 D9 02 00 00         MOV CL,byte ptr [EAX + 0x2d9]
00571B8B  88 4A 50                  MOV byte ptr [EDX + 0x50],CL
00571B8E  8A 88 DA 02 00 00         MOV CL,byte ptr [EAX + 0x2da]
00571B94  88 4A 51                  MOV byte ptr [EDX + 0x51],CL
00571B97  8A 88 DB 02 00 00         MOV CL,byte ptr [EAX + 0x2db]
00571B9D  88 4A 52                  MOV byte ptr [EDX + 0x52],CL
00571BA0  8A 88 DC 02 00 00         MOV CL,byte ptr [EAX + 0x2dc]
00571BA6  88 4A 53                  MOV byte ptr [EDX + 0x53],CL
00571BA9  8A 88 DD 02 00 00         MOV CL,byte ptr [EAX + 0x2dd]
00571BAF  88 4A 54                  MOV byte ptr [EDX + 0x54],CL
00571BB2  8A 88 DE 02 00 00         MOV CL,byte ptr [EAX + 0x2de]
00571BB8  88 4A 55                  MOV byte ptr [EDX + 0x55],CL
00571BBB  8A 88 DF 02 00 00         MOV CL,byte ptr [EAX + 0x2df]
00571BC1  88 4A 56                  MOV byte ptr [EDX + 0x56],CL
00571BC4  8A 88 E0 02 00 00         MOV CL,byte ptr [EAX + 0x2e0]
00571BCA  88 4A 57                  MOV byte ptr [EDX + 0x57],CL
00571BCD  8B 88 E1 02 00 00         MOV ECX,dword ptr [EAX + 0x2e1]
00571BD3  89 4A 58                  MOV dword ptr [EDX + 0x58],ECX
00571BD6  8A 88 E5 02 00 00         MOV CL,byte ptr [EAX + 0x2e5]
00571BDC  88 4A 5C                  MOV byte ptr [EDX + 0x5c],CL
00571BDF  8A 88 F3 02 00 00         MOV CL,byte ptr [EAX + 0x2f3]
00571BE5  88 4A 6A                  MOV byte ptr [EDX + 0x6a],CL
00571BE8  8A 88 F4 02 00 00         MOV CL,byte ptr [EAX + 0x2f4]
00571BEE  88 4A 6B                  MOV byte ptr [EDX + 0x6b],CL
00571BF1  8B 88 F5 02 00 00         MOV ECX,dword ptr [EAX + 0x2f5]
00571BF7  89 4A 6C                  MOV dword ptr [EDX + 0x6c],ECX
00571BFA  8A 88 F2 02 00 00         MOV CL,byte ptr [EAX + 0x2f2]
00571C00  88 4A 69                  MOV byte ptr [EDX + 0x69],CL
00571C03  8B 80 A6 11 00 00         MOV EAX,dword ptr [EAX + 0x11a6]
00571C09  89 42 70                  MOV dword ptr [EDX + 0x70],EAX
00571C0C  5E                        POP ESI
00571C0D  5D                        POP EBP
00571C0E  C3                        RET
