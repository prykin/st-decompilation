FUN_004f0460:
004F0460  53                        PUSH EBX
004F0461  56                        PUSH ESI
004F0462  68 96 02 00 00            PUSH 0x296
004F0467  E8 64 00 1C 00            CALL 0x006b04d0
004F046C  8B F0                     MOV ESI,EAX
004F046E  33 DB                     XOR EBX,EBX
004F0470  3B F3                     CMP ESI,EBX
004F0472  0F 84 E8 00 00 00         JZ 0x004f0560
004F0478  57                        PUSH EDI
004F0479  8B CE                     MOV ECX,ESI
004F047B  E8 30 5B 1F 00            CALL 0x006e5fb0
004F0480  8D 8E A1 01 00 00         LEA ECX,[ESI + 0x1a1]
004F0486  33 C0                     XOR EAX,EAX
004F0488  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
004F048B  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
004F0492  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
004F0499  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
004F049C  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
004F04A5  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
004F04AB  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
004F04B1  89 9E 84 01 00 00         MOV dword ptr [ESI + 0x184],EBX
004F04B7  89 9E 90 01 00 00         MOV dword ptr [ESI + 0x190],EBX
004F04BD  89 9E 88 01 00 00         MOV dword ptr [ESI + 0x188],EBX
004F04C3  89 9E 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EBX
004F04C9  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
004F04CF  89 01                     MOV dword ptr [ECX],EAX
004F04D1  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
004F04D7  33 D2                     XOR EDX,EDX
004F04D9  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004F04DC  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004F04DF  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004F04E2  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
004F04E5  B9 30 00 00 00            MOV ECX,0x30
004F04EA  F3 AB                     STOSD.REP ES:EDI
004F04EC  66 AB                     STOSW ES:EDI
004F04EE  AA                        STOSB ES:EDI
004F04EF  B8 01 00 00 00            MOV EAX,0x1
004F04F4  89 9E 99 01 00 00         MOV dword ptr [ESI + 0x199],EBX
004F04FA  88 86 79 02 00 00         MOV byte ptr [ESI + 0x279],AL
004F0500  88 9E 78 02 00 00         MOV byte ptr [ESI + 0x278],BL
004F0506  C7 06 F0 AB 79 00         MOV dword ptr [ESI],0x79abf0
004F050C  C7 46 3C 0C 00 00 00      MOV dword ptr [ESI + 0x3c],0xc
004F0513  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
004F0516  C7 46 40 3D 01 00 00      MOV dword ptr [ESI + 0x40],0x13d
004F051D  C7 46 48 78 00 00 00      MOV dword ptr [ESI + 0x48],0x78
004F0524  88 9E 94 01 00 00         MOV byte ptr [ESI + 0x194],BL
004F052A  89 86 95 01 00 00         MOV dword ptr [ESI + 0x195],EAX
004F0530  89 9E 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EBX
004F0536  89 9E 92 02 00 00         MOV dword ptr [ESI + 0x292],EBX
004F053C  89 96 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EDX
004F0542  89 96 82 02 00 00         MOV dword ptr [ESI + 0x282],EDX
004F0548  8B C6                     MOV EAX,ESI
004F054A  89 96 86 02 00 00         MOV dword ptr [ESI + 0x286],EDX
004F0550  5F                        POP EDI
004F0551  89 96 8A 02 00 00         MOV dword ptr [ESI + 0x28a],EDX
004F0557  89 96 8E 02 00 00         MOV dword ptr [ESI + 0x28e],EDX
004F055D  5E                        POP ESI
004F055E  5B                        POP EBX
004F055F  C3                        RET
LAB_004f0560:
004F0560  5E                        POP ESI
004F0561  33 C0                     XOR EAX,EAX
004F0563  5B                        POP EBX
004F0564  C3                        RET
