CreateCampaign:
00593860  53                        PUSH EBX
00593861  56                        PUSH ESI
00593862  68 00 20 00 00            PUSH 0x2000
00593867  E8 64 CC 11 00            CALL 0x006b04d0
0059386C  8B F0                     MOV ESI,EAX
0059386E  33 DB                     XOR EBX,EBX
00593870  3B F3                     CMP ESI,EBX
00593872  0F 84 06 01 00 00         JZ 0x0059397e
00593878  57                        PUSH EDI
00593879  8B CE                     MOV ECX,ESI
0059387B  E8 30 27 15 00            CALL 0x006e5fb0
00593880  B9 08 00 00 00            MOV ECX,0x8
00593885  33 C0                     XOR EAX,EAX
00593887  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
0059388A  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
00593890  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
00593893  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
00593896  F3 AB                     STOSD.REP ES:EDI
00593898  B9 08 00 00 00            MOV ECX,0x8
0059389D  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005938A0  F3 AB                     STOSD.REP ES:EDI
005938A2  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005938A8  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005938AE  BB 0D 00 00 00            MOV EBX,0xd
LAB_005938b3:
005938B3  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005938B9  E8 62 1F 18 00            CALL 0x00715820
005938BE  8B CF                     MOV ECX,EDI
005938C0  E8 5B 1F 18 00            CALL 0x00715820
005938C5  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005938CB  E8 50 1F 18 00            CALL 0x00715820
005938D0  81 C7 FB 01 00 00         ADD EDI,0x1fb
005938D6  4B                        DEC EBX
005938D7  75 DA                     JNZ 0x005938b3
005938D9  B9 0D 00 00 00            MOV ECX,0xd
005938DE  33 C0                     XOR EAX,EAX
005938E0  8D 7E 66                  LEA EDI,[ESI + 0x66]
005938E3  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005938E9  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005938ED  C6 86 9A 00 00 00 00      MOV byte ptr [ESI + 0x9a],0x0
005938F4  F3 AB                     STOSD.REP ES:EDI
005938F6  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005938FC  BB 0D 00 00 00            MOV EBX,0xd
LAB_00593901:
00593901  B9 09 00 00 00            MOV ECX,0x9
00593906  33 C0                     XOR EAX,EAX
00593908  8B FA                     MOV EDI,EDX
0059390A  81 C2 FB 01 00 00         ADD EDX,0x1fb
00593910  F3 AB                     STOSD.REP ES:EDI
00593912  66 AB                     STOSW ES:EDI
00593914  4B                        DEC EBX
00593915  AA                        STOSB ES:EDI
00593916  75 E9                     JNZ 0x00593901
00593918  B9 2D 00 00 00            MOV ECX,0x2d
0059391D  33 C0                     XOR EAX,EAX
0059391F  8D BE 5F 1A 00 00         LEA EDI,[ESI + 0x1a5f]
00593925  C7 06 F8 BF 79 00         MOV dword ptr [ESI],0x79bff8
0059392B  F3 AB                     STOSD.REP ES:EDI
0059392D  B9 2D 00 00 00            MOV ECX,0x2d
00593932  8D BE 13 1B 00 00         LEA EDI,[ESI + 0x1b13]
00593938  F3 AB                     STOSD.REP ES:EDI
0059393A  8D 8E C7 1B 00 00         LEA ECX,[ESI + 0x1bc7]
00593940  33 D2                     XOR EDX,EDX
00593942  5F                        POP EDI
00593943  89 01                     MOV dword ptr [ECX],EAX
00593945  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00593948  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0059394B  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0059394E  8D 86 D7 1B 00 00         LEA EAX,[ESI + 0x1bd7]
00593954  89 96 D7 1B 00 00         MOV dword ptr [ESI + 0x1bd7],EDX
0059395A  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0059395D  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00593960  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00593963  88 96 E7 1B 00 00         MOV byte ptr [ESI + 0x1be7],DL
00593969  C7 86 F8 1F 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1ff8],0x1
00593973  89 96 FC 1F 00 00         MOV dword ptr [ESI + 0x1ffc],EDX
00593979  8B C6                     MOV EAX,ESI
0059397B  5E                        POP ESI
0059397C  5B                        POP EBX
0059397D  C3                        RET
LAB_0059397e:
0059397E  5E                        POP ESI
0059397F  33 C0                     XOR EAX,EAX
00593981  5B                        POP EBX
00593982  C3                        RET
