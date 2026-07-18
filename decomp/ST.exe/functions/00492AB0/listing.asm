FUN_00492ab0:
00492AB0  8B 81 F7 06 00 00         MOV EAX,dword ptr [ECX + 0x6f7]
00492AB6  85 C0                     TEST EAX,EAX
00492AB8  7E 16                     JLE 0x00492ad0
00492ABA  83 F8 02                  CMP EAX,0x2
00492ABD  7F 11                     JG 0x00492ad0
00492ABF  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00492AC2  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00492AC8  05 39 30 00 00            ADD EAX,0x3039
00492ACD  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
LAB_00492ad0:
00492AD0  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00492AD3  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00492AD9  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00492ADF  33 D2                     XOR EDX,EDX
00492AE1  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00492AE4  B9 07 00 00 00            MOV ECX,0x7
00492AE9  C1 E8 10                  SHR EAX,0x10
00492AEC  F7 F1                     DIV ECX
00492AEE  8B C2                     MOV EAX,EDX
00492AF0  C3                        RET
