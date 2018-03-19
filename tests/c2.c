job_1 = Job(job_id=1, flops_required = 100, deadline = 200,
            mem_required = 1024, affinity = [0.2,0.5,1,2]);
job_2 = Job(job_id=2, flops_required = 5, deadline = 20,
            mem_required = 64, affinity = [0.2,0.5,1,2]);
job_3 = Job(job_id=3, flops_required = 5, deadline = 10,
            mem_required = 64, affinity = [0.2,0.5,1,2]);

mem1 = Memory(memory_type= 'cache', mem_size=1);
mem2 = Memory(memory_type= 'cache', mem_size=0.5);
mem3 = Memory(memory_type= 'cache', mem_size=1.5);

ram = Memory(memory_type= 'primary', mem_size = 2048, name = "ram1");

proc_1 = Processor( isa = 'ARM', clock_speed : 40, l1_memory = mem1);
proc_2 = Processor( isa = 'AMD', clock_speed : 60, l1_memory = mem2,
                    name = "proc_2");
proc_3 = Processor(isa = 'MIPS', clock_speed : 20, l1_memory = mem3,
                   name = "proc_3");

link_1 = Link(start_point = "proc_1", end_point= "ram1", 40, 50);
link_2 = Link(start_point = "proc_2", end_point= "ram1", 40, 50);
link_3 = Link(start_point = "proc_3", end_point= "ram1", 40, 50);

proc_1.submit_jobs(job_1);
proc_2.submit_jobs(job_2);
proc_3.submit_jobs(job_3);

run([proc_1,proc_2,proc_3]);


