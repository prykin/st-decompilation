IntercomPanelTy::DoneIntercomPanel:
00521B90  55                        PUSH EBP
00521B91  8B EC                     MOV EBP,ESP
00521B93  83 EC 48                  SUB ESP,0x48
00521B96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00521B9B  56                        PUSH ESI
00521B9C  57                        PUSH EDI
00521B9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00521BA0  33 FF                     XOR EDI,EDI
00521BA2  8D 55 BC                  LEA EDX,[EBP + -0x44]
00521BA5  8D 4D B8                  LEA ECX,[EBP + -0x48]
00521BA8  57                        PUSH EDI
00521BA9  52                        PUSH EDX
00521BAA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00521BAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00521BB3  E8 38 BC 20 00            CALL 0x0072d7f0
00521BB8  8B F0                     MOV ESI,EAX
00521BBA  83 C4 08                  ADD ESP,0x8
00521BBD  3B F7                     CMP ESI,EDI
00521BBF  0F 85 97 00 00 00         JNZ 0x00521c5c
00521BC5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00521BC8  8B 86 98 01 00 00         MOV EAX,dword ptr [ESI + 0x198]
00521BCE  3B C7                     CMP EAX,EDI
00521BD0  74 0C                     JZ 0x00521bde
00521BD2  50                        PUSH EAX
00521BD3  E8 98 39 19 00            CALL 0x006b5570
00521BD8  89 BE 98 01 00 00         MOV dword ptr [ESI + 0x198],EDI
LAB_00521bde:
00521BDE  8B 86 A0 01 00 00         MOV EAX,dword ptr [ESI + 0x1a0]
00521BE4  3B C7                     CMP EAX,EDI
00521BE6  74 09                     JZ 0x00521bf1
00521BE8  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00521BEB  50                        PUSH EAX
00521BEC  E8 BF 3A 1C 00            CALL 0x006e56b0
LAB_00521bf1:
00521BF1  89 BE A0 01 00 00         MOV dword ptr [ESI + 0x1a0],EDI
00521BF7  89 3D 9C 16 80 00         MOV dword ptr [0x0080169c],EDI
00521BFD  8B 86 80 01 00 00         MOV EAX,dword ptr [ESI + 0x180]
00521C03  3B C7                     CMP EAX,EDI
00521C05  74 0F                     JZ 0x00521c16
00521C07  50                        PUSH EAX
00521C08  E8 53 E9 1E 00            CALL 0x00710560
00521C0D  83 C4 04                  ADD ESP,0x4
00521C10  89 BE 80 01 00 00         MOV dword ptr [ESI + 0x180],EDI
LAB_00521c16:
00521C16  8B 8E 84 01 00 00         MOV ECX,dword ptr [ESI + 0x184]
00521C1C  8D 86 84 01 00 00         LEA EAX,[ESI + 0x184]
00521C22  3B CF                     CMP ECX,EDI
00521C24  74 0C                     JZ 0x00521c32
00521C26  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00521C2C  50                        PUSH EAX
00521C2D  E8 AE 04 1D 00            CALL 0x006f20e0
LAB_00521c32:
00521C32  8B 8E 9C 01 00 00         MOV ECX,dword ptr [ESI + 0x19c]
00521C38  8D 86 9C 01 00 00         LEA EAX,[ESI + 0x19c]
00521C3E  3B CF                     CMP ECX,EDI
00521C40  74 0C                     JZ 0x00521c4e
00521C42  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00521C48  50                        PUSH EAX
00521C49  E8 92 04 1D 00            CALL 0x006f20e0
LAB_00521c4e:
00521C4E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00521C51  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00521C56  5F                        POP EDI
00521C57  5E                        POP ESI
00521C58  8B E5                     MOV ESP,EBP
00521C5A  5D                        POP EBP
00521C5B  C3                        RET
LAB_00521c5c:
00521C5C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00521C5F  68 B0 40 7C 00            PUSH 0x7c40b0
00521C64  68 CC 4C 7A 00            PUSH 0x7a4ccc
00521C69  56                        PUSH ESI
00521C6A  57                        PUSH EDI
00521C6B  6A 4A                     PUSH 0x4a
00521C6D  68 1C 40 7C 00            PUSH 0x7c401c
00521C72  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00521C78  E8 53 B8 18 00            CALL 0x006ad4d0
00521C7D  83 C4 18                  ADD ESP,0x18
00521C80  85 C0                     TEST EAX,EAX
00521C82  74 01                     JZ 0x00521c85
00521C84  CC                        INT3
LAB_00521c85:
00521C85  6A 4A                     PUSH 0x4a
00521C87  68 1C 40 7C 00            PUSH 0x7c401c
00521C8C  57                        PUSH EDI
00521C8D  56                        PUSH ESI
00521C8E  E8 AD 41 18 00            CALL 0x006a5e40
00521C93  5F                        POP EDI
00521C94  5E                        POP ESI
00521C95  8B E5                     MOV ESP,EBP
00521C97  5D                        POP EBP
00521C98  C3                        RET
