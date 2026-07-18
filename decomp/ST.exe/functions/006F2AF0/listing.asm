cMf32::KeyRecGet:
006F2AF0  55                        PUSH EBP
006F2AF1  8B EC                     MOV EBP,ESP
006F2AF3  83 EC 48                  SUB ESP,0x48
006F2AF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F2AFB  53                        PUSH EBX
006F2AFC  56                        PUSH ESI
006F2AFD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F2B00  57                        PUSH EDI
006F2B01  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F2B04  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F2B07  6A 00                     PUSH 0x0
006F2B09  52                        PUSH EDX
006F2B0A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F2B0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2B13  E8 D8 AC 03 00            CALL 0x0072d7f0
006F2B18  8B F0                     MOV ESI,EAX
006F2B1A  83 C4 08                  ADD ESP,0x8
006F2B1D  85 F6                     TEST ESI,ESI
006F2B1F  0F 85 8B 00 00 00         JNZ 0x006f2bb0
006F2B25  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F2B28  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F2B2B  85 DB                     TEST EBX,EBX
006F2B2D  75 03                     JNZ 0x006f2b32
006F2B2F  8D 5A 18                  LEA EBX,[EDX + 0x18]
LAB_006f2b32:
006F2B32  B9 86 00 00 00            MOV ECX,0x86
006F2B37  33 C0                     XOR EAX,EAX
006F2B39  8B FB                     MOV EDI,EBX
006F2B3B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F2B3E  F3 AB                     STOSD.REP ES:EDI
006F2B40  AA                        STOSB ES:EDI
006F2B41  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
006F2B44  8B FE                     MOV EDI,ESI
006F2B46  88 03                     MOV byte ptr [EBX],AL
006F2B48  83 C9 FF                  OR ECX,0xffffffff
006F2B4B  33 C0                     XOR EAX,EAX
006F2B4D  6A 00                     PUSH 0x0
006F2B4F  F2 AE                     SCASB.REPNE ES:EDI
006F2B51  F7 D1                     NOT ECX
006F2B53  49                        DEC ECX
006F2B54  8D 7B 18                  LEA EDI,[EBX + 0x18]
006F2B57  66 89 4B 16               MOV word ptr [EBX + 0x16],CX
006F2B5B  6A 00                     PUSH 0x0
006F2B5D  0F BF C9                  MOVSX ECX,CX
006F2B60  8B C1                     MOV EAX,ECX
006F2B62  53                        PUSH EBX
006F2B63  C1 E9 02                  SHR ECX,0x2
006F2B66  F3 A5                     MOVSD.REP ES:EDI,ESI
006F2B68  8B C8                     MOV ECX,EAX
006F2B6A  83 E1 03                  AND ECX,0x3
006F2B6D  F3 A4                     MOVSB.REP ES:EDI,ESI
006F2B6F  8B 0A                     MOV ECX,dword ptr [EDX]
006F2B71  51                        PUSH ECX
006F2B72  E8 09 EE 05 00            CALL 0x00751980
006F2B77  83 F8 FC                  CMP EAX,-0x4
006F2B7A  75 14                     JNZ 0x006f2b90
006F2B7C  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F2B7F  33 C0                     XOR EAX,EAX
006F2B81  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F2B87  5F                        POP EDI
006F2B88  5E                        POP ESI
006F2B89  5B                        POP EBX
006F2B8A  8B E5                     MOV ESP,EBP
006F2B8C  5D                        POP EBP
006F2B8D  C2 0C 00                  RET 0xc
LAB_006f2b90:
006F2B90  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F2B93  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2B98  8B C3                     MOV EAX,EBX
006F2B9A  0F BF 4B 16               MOVSX ECX,word ptr [EBX + 0x16]
006F2B9E  C6 44 19 18 00            MOV byte ptr [ECX + EBX*0x1 + 0x18],0x0
006F2BA3  8D 54 19 18               LEA EDX,[ECX + EBX*0x1 + 0x18]
006F2BA7  5F                        POP EDI
006F2BA8  5E                        POP ESI
006F2BA9  5B                        POP EBX
006F2BAA  8B E5                     MOV ESP,EBP
006F2BAC  5D                        POP EBP
006F2BAD  C2 0C 00                  RET 0xc
LAB_006f2bb0:
006F2BB0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F2BB3  68 28 FD 7E 00            PUSH 0x7efd28
006F2BB8  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F2BBD  56                        PUSH ESI
006F2BBE  6A 00                     PUSH 0x0
006F2BC0  68 7E 03 00 00            PUSH 0x37e
006F2BC5  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2BCA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2BCF  E8 FC A8 FB FF            CALL 0x006ad4d0
006F2BD4  83 C4 18                  ADD ESP,0x18
006F2BD7  85 C0                     TEST EAX,EAX
006F2BD9  74 01                     JZ 0x006f2bdc
006F2BDB  CC                        INT3
LAB_006f2bdc:
006F2BDC  68 80 03 00 00            PUSH 0x380
006F2BE1  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2BE6  6A 00                     PUSH 0x0
006F2BE8  56                        PUSH ESI
006F2BE9  E8 52 32 FB FF            CALL 0x006a5e40
006F2BEE  5F                        POP EDI
006F2BEF  5E                        POP ESI
006F2BF0  33 C0                     XOR EAX,EAX
006F2BF2  5B                        POP EBX
006F2BF3  8B E5                     MOV ESP,EBP
006F2BF5  5D                        POP EBP
006F2BF6  C2 0C 00                  RET 0xc
