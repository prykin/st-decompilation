FUN_006a2700:
006A2700  55                        PUSH EBP
006A2701  8B EC                     MOV EBP,ESP
006A2703  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A2706  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A2709  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A270C  51                        PUSH ECX
006A270D  F6 40 05 40               TEST byte ptr [EAX + 0x5],0x40
006A2711  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A2714  52                        PUSH EDX
006A2715  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A2718  50                        PUSH EAX
006A2719  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A271C  50                        PUSH EAX
006A271D  51                        PUSH ECX
006A271E  52                        PUSH EDX
006A271F  75 0E                     JNZ 0x006a272f
006A2721  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A2724  50                        PUSH EAX
006A2725  E8 58 1B D6 FF            CALL 0x00404282
006A272A  83 C4 1C                  ADD ESP,0x1c
006A272D  5D                        POP EBP
006A272E  C3                        RET
LAB_006a272f:
006A272F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A2732  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A2735  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A2738  50                        PUSH EAX
006A2739  51                        PUSH ECX
006A273A  52                        PUSH EDX
006A273B  E8 27 09 D6 FF            CALL 0x00403067
006A2740  83 C4 24                  ADD ESP,0x24
006A2743  5D                        POP EBP
006A2744  C3                        RET
