SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::FUN_005f35f0:
005F35F0  55                        PUSH EBP
005F35F1  8B EC                     MOV EBP,ESP
005F35F3  83 EC 50                  SUB ESP,0x50
005F35F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005F35FB  53                        PUSH EBX
005F35FC  56                        PUSH ESI
005F35FD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F3600  57                        PUSH EDI
005F3601  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005F3604  8D 4D B0                  LEA ECX,[EBP + -0x50]
005F3607  6A 00                     PUSH 0x0
005F3609  52                        PUSH EDX
005F360A  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005F3611  C7 45 F8 A0 E5 7C 00      MOV dword ptr [EBP + -0x8],0x7ce5a0
005F3618  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005F361B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F3621  E8 CA A1 13 00            CALL 0x0072d7f0
005F3626  83 C4 08                  ADD ESP,0x8
005F3629  85 C0                     TEST EAX,EAX
005F362B  0F 85 3D 02 00 00         JNZ 0x005f386e
005F3631  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
005F3635  0F 85 AE 00 00 00         JNZ 0x005f36e9
005F363B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005F363E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F3641  6A 00                     PUSH 0x0
005F3643  6A 00                     PUSH 0x0
005F3645  8B 87 87 00 00 00         MOV EAX,dword ptr [EDI + 0x87]
005F364B  6A 01                     PUSH 0x1
005F364D  6A 00                     PUSH 0x0
005F364F  6A FF                     PUSH -0x1
005F3651  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
005F3654  A1 74 67 80 00            MOV EAX,[0x00806774]
005F3659  52                        PUSH EDX
005F365A  6A 1D                     PUSH 0x1d
005F365C  50                        PUSH EAX
005F365D  E8 8E 64 11 00            CALL 0x00709af0
005F3662  83 C4 20                  ADD ESP,0x20
005F3665  8B D8                     MOV EBX,EAX
005F3667  8D B7 8F 00 00 00         LEA ESI,[EDI + 0x8f]
005F366D  8B 4B 0D                  MOV ECX,dword ptr [EBX + 0xd]
005F3670  8B 53 09                  MOV EDX,dword ptr [EBX + 0x9]
005F3673  6A 00                     PUSH 0x0
005F3675  6A 45                     PUSH 0x45
005F3677  6A 5A                     PUSH 0x5a
005F3679  51                        PUSH ECX
005F367A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F3680  52                        PUSH EDX
005F3681  6A 00                     PUSH 0x0
005F3683  6A 01                     PUSH 0x1
005F3685  56                        PUSH ESI
005F3686  E8 D5 4F 0F 00            CALL 0x006e8660
005F368B  8B 43 21                  MOV EAX,dword ptr [EBX + 0x21]
005F368E  8B 0B                     MOV ECX,dword ptr [EBX]
005F3690  8B 16                     MOV EDX,dword ptr [ESI]
005F3692  6A 01                     PUSH 0x1
005F3694  50                        PUSH EAX
005F3695  51                        PUSH ECX
005F3696  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F369C  6A 00                     PUSH 0x0
005F369E  52                        PUSH EDX
005F369F  E8 3C 62 0F 00            CALL 0x006e98e0
005F36A4  8B 87 AB 00 00 00         MOV EAX,dword ptr [EDI + 0xab]
005F36AA  8B 0E                     MOV ECX,dword ptr [ESI]
005F36AC  50                        PUSH EAX
005F36AD  6A 00                     PUSH 0x0
005F36AF  51                        PUSH ECX
005F36B0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F36B6  E8 B5 6B 0F 00            CALL 0x006ea270
005F36BB  89 9F 71 01 00 00         MOV dword ptr [EDI + 0x171],EBX
005F36C1  A0 26 73 80 00            MOV AL,[0x00807326]
005F36C6  84 C0                     TEST AL,AL
005F36C8  0F 84 1C 01 00 00         JZ 0x005f37ea
005F36CE  8B 16                     MOV EDX,dword ptr [ESI]
005F36D0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F36D6  57                        PUSH EDI
005F36D7  68 70 31 40 00            PUSH 0x403170
005F36DC  6A 00                     PUSH 0x0
005F36DE  52                        PUSH EDX
005F36DF  E8 3C 5E 0F 00            CALL 0x006e9520
005F36E4  E9 01 01 00 00            JMP 0x005f37ea
LAB_005f36e9:
005F36E9  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005F36EC  8B 87 8F 00 00 00         MOV EAX,dword ptr [EDI + 0x8f]
005F36F2  8D B7 8F 00 00 00         LEA ESI,[EDI + 0x8f]
005F36F8  85 C0                     TEST EAX,EAX
005F36FA  7C 1F                     JL 0x005f371b
005F36FC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F3702  57                        PUSH EDI
005F3703  6A 00                     PUSH 0x0
005F3705  6A 00                     PUSH 0x0
005F3707  50                        PUSH EAX
005F3708  E8 13 5E 0F 00            CALL 0x006e9520
005F370D  8B 06                     MOV EAX,dword ptr [ESI]
005F370F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F3715  50                        PUSH EAX
005F3716  E8 85 54 0F 00            CALL 0x006e8ba0
LAB_005f371b:
005F371B  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005F3721  6A 00                     PUSH 0x0
005F3723  6A 00                     PUSH 0x0
005F3725  6A 01                     PUSH 0x1
005F3727  6A 00                     PUSH 0x0
005F3729  6A FF                     PUSH -0x1
005F372B  68 18 E6 7C 00            PUSH 0x7ce618
005F3730  6A 1D                     PUSH 0x1d
005F3732  51                        PUSH ECX
005F3733  E8 B8 63 11 00            CALL 0x00709af0
005F3738  83 C4 20                  ADD ESP,0x20
005F373B  8B D8                     MOV EBX,EAX
005F373D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F3743  8B 53 0D                  MOV EDX,dword ptr [EBX + 0xd]
005F3746  8B 43 09                  MOV EAX,dword ptr [EBX + 0x9]
005F3749  6A 00                     PUSH 0x0
005F374B  6A 45                     PUSH 0x45
005F374D  6A 5A                     PUSH 0x5a
005F374F  52                        PUSH EDX
005F3750  50                        PUSH EAX
005F3751  6A 00                     PUSH 0x0
005F3753  6A 03                     PUSH 0x3
005F3755  56                        PUSH ESI
005F3756  E8 05 4F 0F 00            CALL 0x006e8660
005F375B  8B 4B 21                  MOV ECX,dword ptr [EBX + 0x21]
005F375E  8B 13                     MOV EDX,dword ptr [EBX]
005F3760  8B 06                     MOV EAX,dword ptr [ESI]
005F3762  6A 01                     PUSH 0x1
005F3764  51                        PUSH ECX
005F3765  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F376B  52                        PUSH EDX
005F376C  6A 00                     PUSH 0x0
005F376E  50                        PUSH EAX
005F376F  E8 6C 61 0F 00            CALL 0x006e98e0
005F3774  8B 8F AB 00 00 00         MOV ECX,dword ptr [EDI + 0xab]
005F377A  8B 16                     MOV EDX,dword ptr [ESI]
005F377C  51                        PUSH ECX
005F377D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F3783  6A 00                     PUSH 0x0
005F3785  52                        PUSH EDX
005F3786  E8 E5 6A 0F 00            CALL 0x006ea270
005F378B  A1 64 67 80 00            MOV EAX,[0x00806764]
005F3790  6A 00                     PUSH 0x0
005F3792  6A 00                     PUSH 0x0
005F3794  6A 01                     PUSH 0x1
005F3796  6A 00                     PUSH 0x0
005F3798  6A FF                     PUSH -0x1
005F379A  68 10 E6 7C 00            PUSH 0x7ce610
005F379F  6A 1D                     PUSH 0x1d
005F37A1  50                        PUSH EAX
005F37A2  E8 49 63 11 00            CALL 0x00709af0
005F37A7  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
005F37AA  8B 10                     MOV EDX,dword ptr [EAX]
005F37AC  8B 06                     MOV EAX,dword ptr [ESI]
005F37AE  83 C4 20                  ADD ESP,0x20
005F37B1  6A 01                     PUSH 0x1
005F37B3  51                        PUSH ECX
005F37B4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F37BA  52                        PUSH EDX
005F37BB  6A 02                     PUSH 0x2
005F37BD  50                        PUSH EAX
005F37BE  E8 1D 61 0F 00            CALL 0x006e98e0
005F37C3  8B 8F C0 00 00 00         MOV ECX,dword ptr [EDI + 0xc0]
005F37C9  8B 16                     MOV EDX,dword ptr [ESI]
005F37CB  51                        PUSH ECX
005F37CC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F37D2  6A 02                     PUSH 0x2
005F37D4  52                        PUSH EDX
005F37D5  E8 96 6A 0F 00            CALL 0x006ea270
005F37DA  8B 06                     MOV EAX,dword ptr [ESI]
005F37DC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F37E2  6A 02                     PUSH 0x2
005F37E4  50                        PUSH EAX
005F37E5  E8 56 65 0F 00            CALL 0x006e9d40
LAB_005f37ea:
005F37EA  DB 87 9B 00 00 00         FILD dword ptr [EDI + 0x9b]
005F37F0  51                        PUSH ECX
005F37F1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F37F7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F37FD  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F3803  D9 1C 24                  FSTP float ptr [ESP]
005F3806  DB 87 97 00 00 00         FILD dword ptr [EDI + 0x97]
005F380C  51                        PUSH ECX
005F380D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F3813  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F3819  D9 1C 24                  FSTP float ptr [ESP]
005F381C  DB 87 93 00 00 00         FILD dword ptr [EDI + 0x93]
005F3822  51                        PUSH ECX
005F3823  8B 0E                     MOV ECX,dword ptr [ESI]
005F3825  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F382B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F3831  D9 1C 24                  FSTP float ptr [ESP]
005F3834  51                        PUSH ECX
005F3835  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F383B  E8 20 71 0F 00            CALL 0x006ea960
005F3840  8B 16                     MOV EDX,dword ptr [ESI]
005F3842  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F3848  6A 00                     PUSH 0x0
005F384A  52                        PUSH EDX
005F384B  E8 50 72 0F 00            CALL 0x006eaaa0
005F3850  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005F3853  C6 87 C4 00 00 00 01      MOV byte ptr [EDI + 0xc4],0x1
005F385A  B8 01 00 00 00            MOV EAX,0x1
005F385F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F3865  5F                        POP EDI
005F3866  5E                        POP ESI
005F3867  5B                        POP EBX
005F3868  8B E5                     MOV ESP,EBP
005F386A  5D                        POP EBP
005F386B  C2 04 00                  RET 0x4
LAB_005f386e:
005F386E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005F3871  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F3874  5F                        POP EDI
005F3875  5E                        POP ESI
005F3876  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F387C  5B                        POP EBX
005F387D  8B E5                     MOV ESP,EBP
005F387F  5D                        POP EBP
005F3880  C2 04 00                  RET 0x4
