CreateBehPanel:
004ED540  53                        PUSH EBX
004ED541  56                        PUSH ESI
004ED542  68 BC 02 00 00            PUSH 0x2bc
004ED547  E8 84 2F 1C 00            CALL 0x006b04d0
004ED54C  8B F0                     MOV ESI,EAX
004ED54E  33 DB                     XOR EBX,EBX
004ED550  3B F3                     CMP ESI,EBX
004ED552  0F 84 A0 00 00 00         JZ 0x004ed5f8
004ED558  57                        PUSH EDI
004ED559  8B CE                     MOV ECX,ESI
004ED55B  E8 50 8A 1F 00            CALL 0x006e5fb0
004ED560  B9 3A 00 00 00            MOV ECX,0x3a
004ED565  33 C0                     XOR EAX,EAX
004ED567  8D BE CE 01 00 00         LEA EDI,[ESI + 0x1ce]
004ED56D  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
004ED570  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
004ED577  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
004ED57E  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
004ED581  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
004ED58A  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
004ED590  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
004ED596  89 9E 85 01 00 00         MOV dword ptr [ESI + 0x185],EBX
004ED59C  89 9E 89 01 00 00         MOV dword ptr [ESI + 0x189],EBX
004ED5A2  C7 06 74 AB 79 00         MOV dword ptr [ESI],0x79ab74
004ED5A8  C7 46 40 F7 00 00 00      MOV dword ptr [ESI + 0x40],0xf7
004ED5AF  C7 46 48 8C 00 00 00      MOV dword ptr [ESI + 0x48],0x8c
004ED5B6  C7 46 3C 3B 00 00 00      MOV dword ptr [ESI + 0x3c],0x3b
004ED5BD  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
004ED5C0  C7 86 80 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x180],0x1
004ED5CA  88 9E 84 01 00 00         MOV byte ptr [ESI + 0x184],BL
004ED5D0  89 9E CA 01 00 00         MOV dword ptr [ESI + 0x1ca],EBX
004ED5D6  89 9E C6 01 00 00         MOV dword ptr [ESI + 0x1c6],EBX
004ED5DC  89 9E C2 01 00 00         MOV dword ptr [ESI + 0x1c2],EBX
004ED5E2  89 9E BE 01 00 00         MOV dword ptr [ESI + 0x1be],EBX
004ED5E8  F3 AB                     STOSD.REP ES:EDI
004ED5EA  66 AB                     STOSW ES:EDI
004ED5EC  89 9E B8 02 00 00         MOV dword ptr [ESI + 0x2b8],EBX
004ED5F2  8B C6                     MOV EAX,ESI
004ED5F4  5F                        POP EDI
004ED5F5  5E                        POP ESI
004ED5F6  5B                        POP EBX
004ED5F7  C3                        RET
LAB_004ed5f8:
004ED5F8  5E                        POP ESI
004ED5F9  33 C0                     XOR EAX,EAX
004ED5FB  5B                        POP EBX
004ED5FC  C3                        RET
