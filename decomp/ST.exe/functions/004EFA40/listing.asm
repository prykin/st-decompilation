CreateBldLabPanel:
004EFA40  53                        PUSH EBX
004EFA41  56                        PUSH ESI
004EFA42  68 7E 02 00 00            PUSH 0x27e
004EFA47  E8 84 0A 1C 00            CALL 0x006b04d0
004EFA4C  8B F0                     MOV ESI,EAX
004EFA4E  33 DB                     XOR EBX,EBX
004EFA50  3B F3                     CMP ESI,EBX
004EFA52  0F 84 BE 00 00 00         JZ 0x004efb16
004EFA58  57                        PUSH EDI
004EFA59  8B CE                     MOV ECX,ESI
004EFA5B  E8 50 65 1F 00            CALL 0x006e5fb0
004EFA60  8D 8E A1 01 00 00         LEA ECX,[ESI + 0x1a1]
004EFA66  33 C0                     XOR EAX,EAX
004EFA68  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
004EFA6B  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
004EFA72  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
004EFA79  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
004EFA7C  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
004EFA85  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
004EFA8B  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
004EFA91  89 9E 84 01 00 00         MOV dword ptr [ESI + 0x184],EBX
004EFA97  89 9E 90 01 00 00         MOV dword ptr [ESI + 0x190],EBX
004EFA9D  89 9E 88 01 00 00         MOV dword ptr [ESI + 0x188],EBX
004EFAA3  89 9E 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EBX
004EFAA9  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
004EFAAF  89 01                     MOV dword ptr [ECX],EAX
004EFAB1  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
004EFAB7  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004EFABA  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004EFABD  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004EFAC0  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
004EFAC3  B9 30 00 00 00            MOV ECX,0x30
004EFAC8  F3 AB                     STOSD.REP ES:EDI
004EFACA  66 AB                     STOSW ES:EDI
004EFACC  AA                        STOSB ES:EDI
004EFACD  89 9E 99 01 00 00         MOV dword ptr [ESI + 0x199],EBX
004EFAD3  C6 86 79 02 00 00 01      MOV byte ptr [ESI + 0x279],0x1
004EFADA  88 9E 78 02 00 00         MOV byte ptr [ESI + 0x278],BL
004EFAE0  C7 06 C8 AB 79 00         MOV dword ptr [ESI],0x79abc8
004EFAE6  C7 46 3C C7 01 00 00      MOV dword ptr [ESI + 0x3c],0x1c7
004EFAED  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
004EFAF0  C7 46 40 3D 01 00 00      MOV dword ptr [ESI + 0x40],0x13d
004EFAF7  C7 46 48 78 00 00 00      MOV dword ptr [ESI + 0x48],0x78
004EFAFE  88 9E 94 01 00 00         MOV byte ptr [ESI + 0x194],BL
004EFB04  89 9E 95 01 00 00         MOV dword ptr [ESI + 0x195],EBX
004EFB0A  89 9E 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EBX
004EFB10  8B C6                     MOV EAX,ESI
004EFB12  5F                        POP EDI
004EFB13  5E                        POP ESI
004EFB14  5B                        POP EBX
004EFB15  C3                        RET
LAB_004efb16:
004EFB16  5E                        POP ESI
004EFB17  33 C0                     XOR EAX,EAX
004EFB19  5B                        POP EBX
004EFB1A  C3                        RET
