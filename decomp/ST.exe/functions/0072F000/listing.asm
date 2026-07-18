FUN_0072f000:
0072F000  55                        PUSH EBP
0072F001  8B EC                     MOV EBP,ESP
0072F003  51                        PUSH ECX
0072F004  83 3D 90 71 85 00 01      CMP dword ptr [0x00857190],0x1
0072F00B  75 11                     JNZ 0x0072f01e
0072F00D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F010  50                        PUSH EAX
0072F011  FF 15 20 BC 85 00         CALL dword ptr [0x0085bc20]
0072F017  50                        PUSH EAX
0072F018  FF 15 9C BC 85 00         CALL dword ptr [0x0085bc9c]
LAB_0072f01e:
0072F01E  C7 05 8C 71 85 00 01 00 00 00  MOV dword ptr [0x0085718c],0x1
0072F028  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
0072F02B  88 0D 88 71 85 00         MOV byte ptr [0x00857188],CL
0072F031  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072F035  75 47                     JNZ 0x0072f07e
0072F037  83 3D F4 A5 85 00 00      CMP dword ptr [0x0085a5f4],0x0
0072F03E  74 2C                     JZ 0x0072f06c
0072F040  8B 15 F0 A5 85 00         MOV EDX,dword ptr [0x0085a5f0]
0072F046  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0072f049:
0072F049  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F04C  83 E8 04                  SUB EAX,0x4
0072F04F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072F052  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F055  3B 0D F4 A5 85 00         CMP ECX,dword ptr [0x0085a5f4]
0072F05B  72 0F                     JC 0x0072f06c
0072F05D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072F060  83 3A 00                  CMP dword ptr [EDX],0x0
0072F063  74 05                     JZ 0x0072f06a
0072F065  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F068  FF 10                     CALL dword ptr [EAX]
LAB_0072f06a:
0072F06A  EB DD                     JMP 0x0072f049
LAB_0072f06c:
0072F06C  68 4C 48 7A 00            PUSH 0x7a484c
0072F071  68 44 46 7A 00            PUSH 0x7a4644
0072F076  E8 65 00 00 00            CALL 0x0072f0e0
0072F07B  83 C4 08                  ADD ESP,0x8
LAB_0072f07e:
0072F07E  68 54 4A 7A 00            PUSH 0x7a4a54
0072F083  68 50 49 7A 00            PUSH 0x7a4950
0072F088  E8 53 00 00 00            CALL 0x0072f0e0
0072F08D  83 C4 08                  ADD ESP,0x8
0072F090  83 3D 94 71 85 00 00      CMP dword ptr [0x00857194],0x0
0072F097  75 20                     JNZ 0x0072f0b9
0072F099  6A FF                     PUSH -0x1
0072F09B  E8 A7 5F CD FF            CALL 0x00405047
0072F0A0  83 C4 04                  ADD ESP,0x4
0072F0A3  83 E0 20                  AND EAX,0x20
0072F0A6  85 C0                     TEST EAX,EAX
0072F0A8  74 0F                     JZ 0x0072f0b9
0072F0AA  C7 05 94 71 85 00 01 00 00 00  MOV dword ptr [0x00857194],0x1
0072F0B4  E8 12 68 CD FF            CALL 0x004058cb
LAB_0072f0b9:
0072F0B9  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0072F0BD  74 02                     JZ 0x0072f0c1
0072F0BF  EB 14                     JMP 0x0072f0d5
LAB_0072f0c1:
0072F0C1  C7 05 90 71 85 00 01 00 00 00  MOV dword ptr [0x00857190],0x1
0072F0CB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F0CE  51                        PUSH ECX
0072F0CF  FF 15 A0 BC 85 00         CALL dword ptr [0x0085bca0]
LAB_0072f0d5:
0072F0D5  8B E5                     MOV ESP,EBP
0072F0D7  5D                        POP EBP
0072F0D8  C3                        RET
