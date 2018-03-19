job_1 = Job(job_id=1, flops_required = 100, deadline = 200,
            mem_required = 1024, affinity = [0.2,0.5,1,2]);

job_2 = Job(job_id=2, flops_required = 5, deadline = 20,
            mem_required = 64, affinity = [0.2,0.5,1,2]);

mem1 = Memory(memory_type= 'cache', mem_size=1);
mem2 = Memory(memory_type= 'cache', mem_size=2);
mem3 = Memory(memory_type= 'cache', mem_size=2);

proc_1 = Processor(isa = 'ARM', clock_speed : 40, l1_memory = mem1, 
                   sched = Scheduler(algo = "SJF", name = "my_sched_sjf"));

proc_2 = Processor(isa = 'AMD', clock_speed : 78, l1_memory = mem2);
proc_3 = Processor(isa = 'AMD', clock_speed : 78, l1_memory = mem3);

mono_sched = Scheduler(algo = "Monolithic");
cluster_1 = Cluster(processors=[proc_2, proc_3],
                    topology = "star", 100, 80, sched = mono_sched, name = "cluster1");

run(proc_1);
run(cluster_1);
