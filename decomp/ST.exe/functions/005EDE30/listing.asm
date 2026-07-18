FUN_005ede30:
005EDE30  55                        PUSH EBP
005EDE31  8B EC                     MOV EBP,ESP
005EDE33  8B 81 6F 02 00 00         MOV EAX,dword ptr [ECX + 0x26f]
005EDE39  53                        PUSH EBX
005EDE3A  8B 99 63 02 00 00         MOV EBX,dword ptr [ECX + 0x263]
005EDE40  56                        PUSH ESI
005EDE41  2B C3                     SUB EAX,EBX
005EDE43  57                        PUSH EDI
005EDE44  85 C0                     TEST EAX,EAX
005EDE46  7E 07                     JLE 0x005ede4f
005EDE48  BF 01 00 00 00            MOV EDI,0x1
005EDE4D  EB 06                     JMP 0x005ede55
LAB_005ede4f:
005EDE4F  F7 D8                     NEG EAX
005EDE51  1B C0                     SBB EAX,EAX
005EDE53  8B F8                     MOV EDI,EAX
LAB_005ede55:
005EDE55  66 8B 81 46 02 00 00      MOV AX,word ptr [ECX + 0x246]
005EDE5C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EDE62  66 69 C0 C8 00            IMUL AX,AX,0xc8
005EDE67  83 C0 64                  ADD EAX,0x64
005EDE6A  0F BF F0                  MOVSX ESI,AX
005EDE6D  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EDE73  8B 91 8F 02 00 00         MOV EDX,dword ptr [ECX + 0x28f]
005EDE79  2B C2                     SUB EAX,EDX
005EDE7B  0F AF 81 87 02 00 00      IMUL EAX,dword ptr [ECX + 0x287]
005EDE82  0F AF C7                  IMUL EAX,EDI
005EDE85  99                        CDQ
005EDE86  83 E2 0F                  AND EDX,0xf
005EDE89  03 C2                     ADD EAX,EDX
005EDE8B  C1 F8 04                  SAR EAX,0x4
005EDE8E  03 C3                     ADD EAX,EBX
005EDE90  85 FF                     TEST EDI,EDI
005EDE92  7E 7A                     JLE 0x005edf0e
005EDE94  8D 56 1E                  LEA EDX,[ESI + 0x1e]
005EDE97  3B C2                     CMP EAX,EDX
005EDE99  0F 8E E5 00 00 00         JLE 0x005edf84
005EDE9F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EDEA2  8B 81 77 02 00 00         MOV EAX,dword ptr [ECX + 0x277]
005EDEA8  BF 0B 00 00 00            MOV EDI,0xb
005EDEAD  89 02                     MOV dword ptr [EDX],EAX
005EDEAF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005EDEB2  8B 81 7B 02 00 00         MOV EAX,dword ptr [ECX + 0x27b]
005EDEB8  89 02                     MOV dword ptr [EDX],EAX
005EDEBA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005EDEBD  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005EDEC0  83 C6 E2                  ADD ESI,-0x1e
005EDEC3  89 02                     MOV dword ptr [EDX],EAX
005EDEC5  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005EDEC8  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005EDECE  05 39 30 00 00            ADD EAX,0x3039
005EDED3  33 D2                     XOR EDX,EDX
005EDED5  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
005EDED8  C1 E8 10                  SHR EAX,0x10
005EDEDB  F7 F7                     DIV EDI
005EDEDD  B8 1E 00 00 00            MOV EAX,0x1e
005EDEE2  2B C2                     SUB EAX,EDX
005EDEE4  8B 91 73 02 00 00         MOV EDX,dword ptr [ECX + 0x273]
005EDEEA  50                        PUSH EAX
005EDEEB  8B 81 7B 02 00 00         MOV EAX,dword ptr [ECX + 0x27b]
005EDEF1  6A 00                     PUSH 0x0
005EDEF3  52                        PUSH EDX
005EDEF4  8B 91 77 02 00 00         MOV EDX,dword ptr [ECX + 0x277]
005EDEFA  56                        PUSH ESI
005EDEFB  50                        PUSH EAX
005EDEFC  52                        PUSH EDX
005EDEFD  E8 C4 60 E1 FF            CALL 0x00403fc6
005EDF02  5F                        POP EDI
005EDF03  5E                        POP ESI
005EDF04  B8 01 00 00 00            MOV EAX,0x1
005EDF09  5B                        POP EBX
005EDF0A  5D                        POP EBP
005EDF0B  C2 0C 00                  RET 0xc
LAB_005edf0e:
005EDF0E  8D 56 E2                  LEA EDX,[ESI + -0x1e]
005EDF11  3B C2                     CMP EAX,EDX
005EDF13  7D 6F                     JGE 0x005edf84
005EDF15  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EDF18  8B 81 77 02 00 00         MOV EAX,dword ptr [ECX + 0x277]
005EDF1E  BF 0B 00 00 00            MOV EDI,0xb
005EDF23  89 02                     MOV dword ptr [EDX],EAX
005EDF25  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005EDF28  8B 81 7B 02 00 00         MOV EAX,dword ptr [ECX + 0x27b]
005EDF2E  89 02                     MOV dword ptr [EDX],EAX
005EDF30  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005EDF33  8D 46 E3                  LEA EAX,[ESI + -0x1d]
005EDF36  83 C6 1E                  ADD ESI,0x1e
005EDF39  89 02                     MOV dword ptr [EDX],EAX
005EDF3B  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005EDF3E  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005EDF44  05 39 30 00 00            ADD EAX,0x3039
005EDF49  33 D2                     XOR EDX,EDX
005EDF4B  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
005EDF4E  C1 E8 10                  SHR EAX,0x10
005EDF51  F7 F7                     DIV EDI
005EDF53  B8 1E 00 00 00            MOV EAX,0x1e
005EDF58  2B C2                     SUB EAX,EDX
005EDF5A  8B 91 73 02 00 00         MOV EDX,dword ptr [ECX + 0x273]
005EDF60  50                        PUSH EAX
005EDF61  8B 81 7B 02 00 00         MOV EAX,dword ptr [ECX + 0x27b]
005EDF67  6A 00                     PUSH 0x0
005EDF69  52                        PUSH EDX
005EDF6A  8B 91 77 02 00 00         MOV EDX,dword ptr [ECX + 0x277]
005EDF70  56                        PUSH ESI
005EDF71  50                        PUSH EAX
005EDF72  52                        PUSH EDX
005EDF73  E8 4E 60 E1 FF            CALL 0x00403fc6
005EDF78  5F                        POP EDI
005EDF79  5E                        POP ESI
005EDF7A  B8 01 00 00 00            MOV EAX,0x1
005EDF7F  5B                        POP EBX
005EDF80  5D                        POP EBP
005EDF81  C2 0C 00                  RET 0xc
LAB_005edf84:
005EDF84  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005EDF87  8B 91 77 02 00 00         MOV EDX,dword ptr [ECX + 0x277]
005EDF8D  5F                        POP EDI
005EDF8E  89 16                     MOV dword ptr [ESI],EDX
005EDF90  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005EDF93  8B 89 7B 02 00 00         MOV ECX,dword ptr [ECX + 0x27b]
005EDF99  5E                        POP ESI
005EDF9A  89 0A                     MOV dword ptr [EDX],ECX
005EDF9C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005EDF9F  5B                        POP EBX
005EDFA0  89 01                     MOV dword ptr [ECX],EAX
005EDFA2  B8 01 00 00 00            MOV EAX,0x1
005EDFA7  5D                        POP EBP
005EDFA8  C2 0C 00                  RET 0xc
