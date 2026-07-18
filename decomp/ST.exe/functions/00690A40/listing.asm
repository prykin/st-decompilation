FUN_00690a40:
00690A40  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00690A43  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00690A49  05 39 30 00 00            ADD EAX,0x3039
00690A4E  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00690A51  C1 E8 10                  SHR EAX,0x10
00690A54  83 E0 07                  AND EAX,0x7
00690A57  83 C0 08                  ADD EAX,0x8
00690A5A  89 81 89 00 00 00         MOV dword ptr [ECX + 0x89],EAX
00690A60  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00690A63  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00690A69  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00690A6F  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00690A72  C1 E8 10                  SHR EAX,0x10
00690A75  83 E0 07                  AND EAX,0x7
00690A78  83 C0 08                  ADD EAX,0x8
00690A7B  89 81 91 00 00 00         MOV dword ptr [ECX + 0x91],EAX
00690A81  C3                        RET
