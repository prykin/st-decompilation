FUN_0052af50:
0052AF50  55                        PUSH EBP
0052AF51  8B EC                     MOV EBP,ESP
0052AF53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052AF56  3C 02                     CMP AL,0x2
0052AF58  73 18                     JNC 0x0052af72
0052AF5A  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0052AF60  85 C9                     TEST ECX,ECX
0052AF62  74 0E                     JZ 0x0052af72
0052AF64  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0052AF67  52                        PUSH EDX
0052AF68  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0052AF6B  52                        PUSH EDX
0052AF6C  50                        PUSH EAX
0052AF6D  E8 60 6B ED FF            CALL 0x00401ad2
LAB_0052af72:
0052AF72  5D                        POP EBP
0052AF73  C3                        RET
