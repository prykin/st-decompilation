FUN_00630000:
00630000  55                        PUSH EBP
00630001  8B EC                     MOV EBP,ESP
00630003  51                        PUSH ECX
00630004  53                        PUSH EBX
00630005  8B D9                     MOV EBX,ECX
00630007  56                        PUSH ESI
00630008  57                        PUSH EDI
00630009  8D BB E5 01 00 00         LEA EDI,[EBX + 0x1e5]
0063000F  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
LAB_00630016:
00630016  8B 07                     MOV EAX,dword ptr [EDI]
00630018  85 C0                     TEST EAX,EAX
0063001A  74 7B                     JZ 0x00630097
0063001C  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0063001F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00630022  50                        PUSH EAX
00630023  51                        PUSH ECX
00630024  8B CB                     MOV ECX,EBX
00630026  E8 CA 38 DD FF            CALL 0x004038f5
0063002B  8B 17                     MOV EDX,dword ptr [EDI]
0063002D  89 42 2C                  MOV dword ptr [EDX + 0x2c],EAX
00630030  8B 07                     MOV EAX,dword ptr [EDI]
00630032  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
00630035  85 F6                     TEST ESI,ESI
00630037  74 5E                     JZ 0x00630097
00630039  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
0063003C  8B CE                     MOV ECX,ESI
0063003E  50                        PUSH EAX
0063003F  6A 0E                     PUSH 0xe
00630041  E8 1E 10 DD FF            CALL 0x00401064
00630046  6A 0E                     PUSH 0xe
00630048  8B CE                     MOV ECX,ESI
0063004A  E8 6D 30 DD FF            CALL 0x004030bc
0063004F  8B 07                     MOV EAX,dword ptr [EDI]
00630051  51                        PUSH ECX
00630052  DB 40 28                  FILD dword ptr [EAX + 0x28]
00630055  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063005B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630061  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00630067  D9 1C 24                  FSTP float ptr [ESP]
0063006A  DB 40 24                  FILD dword ptr [EAX + 0x24]
0063006D  51                        PUSH ECX
0063006E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630074  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063007A  D9 1C 24                  FSTP float ptr [ESP]
0063007D  DB 40 20                  FILD dword ptr [EAX + 0x20]
00630080  51                        PUSH ECX
00630081  8B CE                     MOV ECX,ESI
00630083  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630089  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063008F  D9 1C 24                  FSTP float ptr [ESP]
00630092  E8 42 45 DD FF            CALL 0x004045d9
LAB_00630097:
00630097  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063009A  83 C7 04                  ADD EDI,0x4
0063009D  48                        DEC EAX
0063009E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006300A1  0F 85 6F FF FF FF         JNZ 0x00630016
006300A7  5F                        POP EDI
006300A8  5E                        POP ESI
006300A9  5B                        POP EBX
006300AA  8B E5                     MOV ESP,EBP
006300AC  5D                        POP EBP
006300AD  C2 04 00                  RET 0x4
