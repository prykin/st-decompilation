STBHEShellC::sub_005F5C40:
005F5C40  55                        PUSH EBP
005F5C41  8B EC                     MOV EBP,ESP
005F5C43  83 EC 0C                  SUB ESP,0xc
005F5C46  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F5C49  33 C0                     XOR EAX,EAX
005F5C4B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F5C4E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005F5C51  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005F5C54  B8 79 19 8C 02            MOV EAX,0x28c1979
005F5C59  85 D2                     TEST EDX,EDX
005F5C5B  7C 10                     JL 0x005f5c6d
005F5C5D  F7 EA                     IMUL EDX
005F5C5F  D1 FA                     SAR EDX,0x1
005F5C61  8B C2                     MOV EAX,EDX
005F5C63  C1 E8 1F                  SHR EAX,0x1f
005F5C66  03 D0                     ADD EDX,EAX
005F5C68  0F BF D2                  MOVSX EDX,DX
005F5C6B  EB 0F                     JMP 0x005f5c7c
LAB_005f5c6d:
005F5C6D  F7 EA                     IMUL EDX
005F5C6F  D1 FA                     SAR EDX,0x1
005F5C71  8B C2                     MOV EAX,EDX
005F5C73  C1 E8 1F                  SHR EAX,0x1f
005F5C76  03 D0                     ADD EDX,EAX
005F5C78  0F BF D2                  MOVSX EDX,DX
005F5C7B  4A                        DEC EDX
LAB_005f5c7c:
005F5C7C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005F5C7F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F5C82  85 D2                     TEST EDX,EDX
005F5C84  B8 79 19 8C 02            MOV EAX,0x28c1979
005F5C89  7C 10                     JL 0x005f5c9b
005F5C8B  F7 EA                     IMUL EDX
005F5C8D  D1 FA                     SAR EDX,0x1
005F5C8F  8B C2                     MOV EAX,EDX
005F5C91  C1 E8 1F                  SHR EAX,0x1f
005F5C94  03 D0                     ADD EDX,EAX
005F5C96  0F BF D2                  MOVSX EDX,DX
005F5C99  EB 0F                     JMP 0x005f5caa
LAB_005f5c9b:
005F5C9B  F7 EA                     IMUL EDX
005F5C9D  D1 FA                     SAR EDX,0x1
005F5C9F  8B C2                     MOV EAX,EDX
005F5CA1  C1 E8 1F                  SHR EAX,0x1f
005F5CA4  03 D0                     ADD EDX,EAX
005F5CA6  0F BF D2                  MOVSX EDX,DX
005F5CA9  4A                        DEC EDX
LAB_005f5caa:
005F5CAA  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
005F5CAD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005F5CB0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F5CB3  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F5CB6  6A 00                     PUSH 0x0
005F5CB8  51                        PUSH ECX
005F5CB9  52                        PUSH EDX
005F5CBA  6A 00                     PUSH 0x0
005F5CBC  6A 02                     PUSH 0x2
005F5CBE  B9 58 76 80 00            MOV ECX,0x807658
005F5CC3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005F5CC6  E8 0D EF E0 FF            CALL 0x00404bd8
005F5CCB  8B E5                     MOV ESP,EBP
005F5CCD  5D                        POP EBP
005F5CCE  C2 0C 00                  RET 0xc
