FUN_00417830:
00417830  8B 91 EC 00 00 00         MOV EDX,dword ptr [ECX + 0xec]
00417836  57                        PUSH EDI
00417837  B8 01 00 00 00            MOV EAX,0x1
0041783C  33 FF                     XOR EDI,EDI
0041783E  3B D0                     CMP EDX,EAX
00417840  75 06                     JNZ 0x00417848
00417842  89 B9 EC 00 00 00         MOV dword ptr [ECX + 0xec],EDI
LAB_00417848:
00417848  39 81 88 00 00 00         CMP dword ptr [ECX + 0x88],EAX
0041784E  75 0C                     JNZ 0x0041785c
00417850  89 B9 88 00 00 00         MOV dword ptr [ECX + 0x88],EDI
00417856  89 81 EC 00 00 00         MOV dword ptr [ECX + 0xec],EAX
LAB_0041785c:
0041785C  39 81 F0 00 00 00         CMP dword ptr [ECX + 0xf0],EAX
00417862  75 10                     JNZ 0x00417874
00417864  89 B9 F0 00 00 00         MOV dword ptr [ECX + 0xf0],EDI
0041786A  89 B9 E8 00 00 00         MOV dword ptr [ECX + 0xe8],EDI
00417870  33 C0                     XOR EAX,EAX
00417872  5F                        POP EDI
00417873  C3                        RET
LAB_00417874:
00417874  66 8B 51 6C               MOV DX,word ptr [ECX + 0x6c]
00417878  66 3B 91 84 00 00 00      CMP DX,word ptr [ECX + 0x84]
0041787F  75 13                     JNZ 0x00417894
00417881  89 B9 EC 00 00 00         MOV dword ptr [ECX + 0xec],EDI
00417887  89 81 F0 00 00 00         MOV dword ptr [ECX + 0xf0],EAX
0041788D  B8 02 00 00 00            MOV EAX,0x2
00417892  5F                        POP EDI
00417893  C3                        RET
LAB_00417894:
00417894  66 8B 81 86 00 00 00      MOV AX,word ptr [ECX + 0x86]
0041789B  56                        PUSH ESI
0041789C  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
0041789F  0F BF C0                  MOVSX EAX,AX
004178A2  99                        CDQ
004178A3  33 C2                     XOR EAX,EDX
004178A5  66 89 71 6C               MOV word ptr [ECX + 0x6c],SI
004178A9  2B C2                     SUB EAX,EDX
004178AB  BA 68 01 00 00            MOV EDX,0x168
004178B0  0F BF F6                  MOVSX ESI,SI
004178B3  2B D0                     SUB EDX,EAX
004178B5  3B F2                     CMP ESI,EDX
004178B7  5E                        POP ESI
004178B8  7E 04                     JLE 0x004178be
004178BA  66 89 79 6C               MOV word ptr [ECX + 0x6c],DI
LAB_004178be:
004178BE  66 39 79 6C               CMP word ptr [ECX + 0x6c],DI
004178C2  7D 0B                     JGE 0x004178cf
004178C4  BA 68 01 00 00            MOV EDX,0x168
004178C9  2B D0                     SUB EDX,EAX
004178CB  66 89 51 6C               MOV word ptr [ECX + 0x6c],DX
LAB_004178cf:
004178CF  B8 02 00 00 00            MOV EAX,0x2
004178D4  5F                        POP EDI
004178D5  C3                        RET
