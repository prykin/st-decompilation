__allshl:
00741210  80 F9 40                  CMP CL,0x40
00741213  73 15                     JNC 0x0074122a
00741215  80 F9 20                  CMP CL,0x20
00741218  73 06                     JNC 0x00741220
0074121A  0F A5 C2                  SHLD EDX,EAX,CL
0074121D  D3 E0                     SHL EAX,CL
0074121F  C3                        RET
LAB_00741220:
00741220  8B D0                     MOV EDX,EAX
00741222  33 C0                     XOR EAX,EAX
00741224  80 E1 1F                  AND CL,0x1f
00741227  D3 E2                     SHL EDX,CL
00741229  C3                        RET
LAB_0074122a:
0074122A  33 C0                     XOR EAX,EAX
0074122C  33 D2                     XOR EDX,EDX
0074122E  C3                        RET
