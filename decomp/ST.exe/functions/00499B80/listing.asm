STGroupBoatC::MakePVec:
00499B80  55                        PUSH EBP
00499B81  8B EC                     MOV EBP,ESP
00499B83  83 EC 54                  SUB ESP,0x54
00499B86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00499B8B  53                        PUSH EBX
00499B8C  56                        PUSH ESI
00499B8D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00499B90  57                        PUSH EDI
00499B91  8D 55 B0                  LEA EDX,[EBP + -0x50]
00499B94  8D 4D AC                  LEA ECX,[EBP + -0x54]
00499B97  6A 00                     PUSH 0x0
00499B99  52                        PUSH EDX
00499B9A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00499B9D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00499BA3  E8 48 3C 29 00            CALL 0x0072d7f0
00499BA8  8B F0                     MOV ESI,EAX
00499BAA  83 C4 08                  ADD ESP,0x8
00499BAD  85 F6                     TEST ESI,ESI
00499BAF  0F 85 48 01 00 00         JNZ 0x00499cfd
00499BB5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00499BB8  8B 83 0E 02 00 00         MOV EAX,dword ptr [EBX + 0x20e]
00499BBE  85 C0                     TEST EAX,EAX
00499BC0  75 1A                     JNZ 0x00499bdc
00499BC2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00499BC7  68 2E 05 00 00            PUSH 0x52e
00499BCC  68 3C BE 7A 00            PUSH 0x7abe3c
00499BD1  50                        PUSH EAX
00499BD2  68 09 00 FE AF            PUSH 0xaffe0009
00499BD7  E8 64 C2 20 00            CALL 0x006a5e40
LAB_00499bdc:
00499BDC  8B 83 1E 02 00 00         MOV EAX,dword ptr [EBX + 0x21e]
00499BE2  8D BB 1E 02 00 00         LEA EDI,[EBX + 0x21e]
00499BE8  85 C0                     TEST EAX,EAX
00499BEA  74 06                     JZ 0x00499bf2
00499BEC  57                        PUSH EDI
00499BED  E8 6E 14 21 00            CALL 0x006ab060
LAB_00499bf2:
00499BF2  8B 8B 0E 02 00 00         MOV ECX,dword ptr [EBX + 0x20e]
00499BF8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00499BFB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00499BFE  89 83 1A 02 00 00         MOV dword ptr [EBX + 0x21a],EAX
00499C04  8D 34 C5 00 00 00 00      LEA ESI,[EAX*0x8 + 0x0]
00499C0B  56                        PUSH ESI
00499C0C  E8 5F 10 21 00            CALL 0x006aac70
00499C11  8B D0                     MOV EDX,EAX
00499C13  8B CE                     MOV ECX,ESI
00499C15  89 17                     MOV dword ptr [EDI],EDX
00499C17  8B FA                     MOV EDI,EDX
00499C19  8B D1                     MOV EDX,ECX
00499C1B  33 C0                     XOR EAX,EAX
00499C1D  C1 E9 02                  SHR ECX,0x2
00499C20  F3 AB                     STOSD.REP ES:EDI
00499C22  8B CA                     MOV ECX,EDX
00499C24  33 F6                     XOR ESI,ESI
00499C26  83 E1 03                  AND ECX,0x3
00499C29  F3 AA                     STOSB.REP ES:EDI
00499C2B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00499C2E  89 B3 16 02 00 00         MOV dword ptr [EBX + 0x216],ESI
00499C34  85 FF                     TEST EDI,EDI
00499C36  0F 8E B0 00 00 00         JLE 0x00499cec
LAB_00499c3c:
00499C3C  8B 8B 0E 02 00 00         MOV ECX,dword ptr [EBX + 0x20e]
00499C42  8D 45 F0                  LEA EAX,[EBP + -0x10]
00499C45  50                        PUSH EAX
00499C46  8B D6                     MOV EDX,ESI
00499C48  E8 23 30 21 00            CALL 0x006acc70
00499C4D  0F BE 4D F1               MOVSX ECX,byte ptr [EBP + -0xf]
00499C51  8B 55 F2                  MOV EDX,dword ptr [EBP + -0xe]
00499C54  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00499C57  51                        PUSH ECX
00499C58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00499C5E  52                        PUSH EDX
00499C5F  50                        PUSH EAX
00499C60  E8 55 8C F6 FF            CALL 0x004028ba
00499C65  85 C0                     TEST EAX,EAX
00499C67  75 3D                     JNZ 0x00499ca6
00499C69  8B 93 0E 02 00 00         MOV EDX,dword ptr [EBX + 0x20e]
00499C6F  8D 4D F0                  LEA ECX,[EBP + -0x10]
00499C72  51                        PUSH ECX
00499C73  56                        PUSH ESI
00499C74  52                        PUSH EDX
00499C75  66 C7 45 F2 FF FF         MOV word ptr [EBP + -0xe],0xffff
00499C7B  E8 C0 44 21 00            CALL 0x006ae140
00499C80  8B 83 1E 02 00 00         MOV EAX,dword ptr [EBX + 0x21e]
00499C86  8D 4F FF                  LEA ECX,[EDI + -0x1]
00499C89  3B F1                     CMP ESI,ECX
00499C8B  C7 04 F0 FF FF FF FF      MOV dword ptr [EAX + ESI*0x8],0xffffffff
00499C92  7D 4F                     JGE 0x00499ce3
00499C94  8B 93 1E 02 00 00         MOV EDX,dword ptr [EBX + 0x21e]
00499C9A  8B 83 16 02 00 00         MOV EAX,dword ptr [EBX + 0x216]
00499CA0  89 44 F2 08               MOV dword ptr [EDX + ESI*0x8 + 0x8],EAX
00499CA4  EB 3D                     JMP 0x00499ce3
LAB_00499ca6:
00499CA6  8B 88 19 02 00 00         MOV ECX,dword ptr [EAX + 0x219]
00499CAC  8B 90 15 02 00 00         MOV EDX,dword ptr [EAX + 0x215]
00499CB2  03 CA                     ADD ECX,EDX
00499CB4  8B 93 16 02 00 00         MOV EDX,dword ptr [EBX + 0x216]
00499CBA  03 D1                     ADD EDX,ECX
00499CBC  8D 47 FF                  LEA EAX,[EDI + -0x1]
00499CBF  89 93 16 02 00 00         MOV dword ptr [EBX + 0x216],EDX
00499CC5  8B 93 1E 02 00 00         MOV EDX,dword ptr [EBX + 0x21e]
00499CCB  3B F0                     CMP ESI,EAX
00499CCD  89 4C F2 04               MOV dword ptr [EDX + ESI*0x8 + 0x4],ECX
00499CD1  7D 10                     JGE 0x00499ce3
00499CD3  8B 8B 1E 02 00 00         MOV ECX,dword ptr [EBX + 0x21e]
00499CD9  8B 93 16 02 00 00         MOV EDX,dword ptr [EBX + 0x216]
00499CDF  89 54 F1 08               MOV dword ptr [ECX + ESI*0x8 + 0x8],EDX
LAB_00499ce3:
00499CE3  46                        INC ESI
00499CE4  3B F7                     CMP ESI,EDI
00499CE6  0F 8C 50 FF FF FF         JL 0x00499c3c
LAB_00499cec:
00499CEC  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00499CEF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00499CF4  33 C0                     XOR EAX,EAX
00499CF6  5F                        POP EDI
00499CF7  5E                        POP ESI
00499CF8  5B                        POP EBX
00499CF9  8B E5                     MOV ESP,EBP
00499CFB  5D                        POP EBP
00499CFC  C3                        RET
LAB_00499cfd:
00499CFD  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00499D00  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00499D06  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00499D0C  75 09                     JNZ 0x00499d17
00499D0E  33 C0                     XOR EAX,EAX
00499D10  5F                        POP EDI
00499D11  5E                        POP ESI
00499D12  5B                        POP EBX
00499D13  8B E5                     MOV ESP,EBP
00499D15  5D                        POP EBP
00499D16  C3                        RET
LAB_00499d17:
00499D17  68 F8 BE 7A 00            PUSH 0x7abef8
00499D1C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00499D21  56                        PUSH ESI
00499D22  6A 00                     PUSH 0x0
00499D24  68 43 05 00 00            PUSH 0x543
00499D29  68 3C BE 7A 00            PUSH 0x7abe3c
00499D2E  E8 9D 37 21 00            CALL 0x006ad4d0
00499D33  83 C4 18                  ADD ESP,0x18
00499D36  85 C0                     TEST EAX,EAX
00499D38  74 01                     JZ 0x00499d3b
00499D3A  CC                        INT3
LAB_00499d3b:
00499D3B  68 44 05 00 00            PUSH 0x544
00499D40  68 3C BE 7A 00            PUSH 0x7abe3c
00499D45  6A 00                     PUSH 0x0
00499D47  56                        PUSH ESI
00499D48  E8 F3 C0 20 00            CALL 0x006a5e40
00499D4D  5F                        POP EDI
00499D4E  5E                        POP ESI
00499D4F  83 C8 FF                  OR EAX,0xffffffff
00499D52  5B                        POP EBX
00499D53  8B E5                     MOV ESP,EBP
00499D55  5D                        POP EBP
00499D56  C3                        RET
