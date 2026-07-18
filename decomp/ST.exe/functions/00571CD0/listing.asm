FUN_00571cd0:
00571CD0  55                        PUSH EBP
00571CD1  8B EC                     MOV EBP,ESP
00571CD3  51                        PUSH ECX
00571CD4  53                        PUSH EBX
00571CD5  56                        PUSH ESI
00571CD6  8B D9                     MOV EBX,ECX
00571CD8  57                        PUSH EDI
00571CD9  33 D2                     XOR EDX,EDX
00571CDB  BF 84 A6 7C 00            MOV EDI,0x7ca684
00571CE0  83 C9 FF                  OR ECX,0xffffffff
00571CE3  33 C0                     XOR EAX,EAX
00571CE5  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
00571CE8  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
00571CEB  89 53 10                  MOV dword ptr [EBX + 0x10],EDX
00571CEE  89 53 14                  MOV dword ptr [EBX + 0x14],EDX
00571CF1  89 13                     MOV dword ptr [EBX],EDX
00571CF3  89 53 04                  MOV dword ptr [EBX + 0x4],EDX
00571CF6  88 53 28                  MOV byte ptr [EBX + 0x28],DL
00571CF9  88 93 2C 01 00 00         MOV byte ptr [EBX + 0x12c],DL
00571CFF  88 93 38 04 00 00         MOV byte ptr [EBX + 0x438],DL
00571D05  88 93 30 02 00 00         MOV byte ptr [EBX + 0x230],DL
00571D0B  88 93 34 03 00 00         MOV byte ptr [EBX + 0x334],DL
00571D11  88 93 45 06 00 00         MOV byte ptr [EBX + 0x645],DL
00571D17  88 93 3C 05 00 00         MOV byte ptr [EBX + 0x53c],DL
00571D1D  8D B3 49 07 00 00         LEA ESI,[EBX + 0x749]
00571D23  F2 AE                     SCASB.REPNE ES:EDI
00571D25  F7 D1                     NOT ECX
00571D27  2B F9                     SUB EDI,ECX
00571D29  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00571D2C  8B C1                     MOV EAX,ECX
00571D2E  8B F7                     MOV ESI,EDI
00571D30  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00571D33  C1 E9 02                  SHR ECX,0x2
00571D36  F3 A5                     MOVSD.REP ES:EDI,ESI
00571D38  8B C8                     MOV ECX,EAX
00571D3A  83 E1 03                  AND ECX,0x3
00571D3D  F3 A4                     MOVSB.REP ES:EDI,ESI
00571D3F  8B CB                     MOV ECX,EBX
00571D41  88 93 EE 0D 00 00         MOV byte ptr [EBX + 0xdee],DL
00571D47  C7 83 81 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x781],0x1
00571D51  88 93 AE 0D 00 00         MOV byte ptr [EBX + 0xdae],DL
00571D57  E8 04 1A E9 FF            CALL 0x00403760
00571D5C  5F                        POP EDI
00571D5D  8B C3                     MOV EAX,EBX
00571D5F  5E                        POP ESI
00571D60  5B                        POP EBX
00571D61  8B E5                     MOV ESP,EBP
00571D63  5D                        POP EBP
00571D64  C3                        RET
